#include <iostream>
#include "vector.h"
#include "Cialo.h"
#include "output.h"
#include "input.h"


void funkcja(std::vector<Cialo_Niebieskie> &cialo,int krok)
{
	const double G =6.67259 * pow(10,-11);

	for(int i = 0 ; i < cialo.size(); i++)
		cialo[i].acc = {0,0,0};

	for(int i = 0 ; i < cialo.size() ; i++)
		for (int j = i + 1 ; j < cialo.size() ; j++)
		{
			double sila = G * ((cialo[i].masa * cialo[j].masa) / (cialo[i].pos - cialo[j].pos).mag_squared());
			cialo[i].acc -= (normalized(cialo[i].pos-cialo[j].pos) * (sila / cialo[i].masa));
			cialo[j].acc += (normalized(cialo[i].pos-cialo[j].pos) * (sila / cialo[j].masa));
		}

	for(auto& cialo1 : cialo)
	{
		cialo1.vel += cialo1.acc * krok;
		cialo1.pos += cialo1.vel * krok;
	}
}


int main()
{
	std::vector<Cialo_Niebieskie> ciala;
    int krok_czasowy;
    wczytaj_dane_poczatkowe("wejscie.txt", ciala, krok_czasowy);


	std::ofstream plik_wyjsciowy = zainicjalizuj_plik_wejsciowy(ciala, krok_czasowy, "wyjscie.txt");
	wypisz_krok_do_pliku(ciala, plik_wyjsciowy);

	

	for(int i = 1; i <= 43800 * 5; i++)
    { 
		funkcja(ciala, krok_czasowy);
        wypisz_krok_do_pliku(ciala, plik_wyjsciowy);
    }

    plik_wyjsciowy << NAN;
    return 0;

}
