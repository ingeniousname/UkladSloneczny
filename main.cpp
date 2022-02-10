#include <iostream>
#include "vector.h"
#include "Cialo.h"
#include "output.h"


void funkcja(std::vector<Cialo_Niebieskie> &cialo,int krok)
{
	const double G =6.67259 * pow(10,-11);
	for( int i =0 ; i < cialo.size() ; i++)
		cialo[i].acc = {0,0,0};
	for( int i =0 ; i < cialo.size() ; i++)
		for ( int j = i+1 ; j < cialo.size() ; j++)
		{
			double sila= G * ( (cialo[i].masa *cialo[j].masa)/ mag_squared(cialo[i].pos-cialo[j].pos));
			cialo[i].acc += normalized(cialo[i].pos-cialo[j].pos) *(sila / cialo[i].masa) ;
			cialo[j].acc += -normalized(cialo[i].pos-cialo[j].pos) *(sila / cialo[j].masa) ;
		}
	for( auto & cialo1:cialo)
	{
		cialo1.vel += cialo1.acc*krok;
		cialo1.pos += cialo1.vel*krok;
	}
}


int main()
{
	std::vector<Cialo_Niebieskie> ciala;
	ciala.push_back(Cialo_Niebieskie("Slonce", {1.0f, 2.0f, 3.0f}, {1.0f, 2.0f, 3.0f}, {1.0f, 2.0f, 3.0f}, 11.0f));	
	ciala.push_back(Cialo_Niebieskie("Ziemia", {3.0f, 2.0f, 1.0f}, {3.0f, 2.0f, 1.0f}, {3.0f, 2.0f, 1.0f}, 5.0f));
	int krok_czasowy = 10;


	std::ofstream plik_wyjsciowy = zainicjalizuj_plik_wejsciowy(ciala, krok_czasowy, "wyjscie.txt");
	wypisz_krok_do_pliku(ciala, plik_wyjsciowy);

	return 0;

}
