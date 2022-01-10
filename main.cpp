#include <iostream>

#include "vector.h"
#include "Cialo.h"
#include "output.h"

int main()
{
	std::vector<Cialo_Niebieskie> ciala;
	ciala.push_back(Cialo_Niebieskie("Slonce", {1.0f, 2.0f, 3.0f}, {1.0f, 2.0f, 3.0f}, {1.0f, 2.0f, 3.0f}, 11.0f));	
	ciala.push_back(Cialo_Niebieskie("Ziemia", {3.0f, 2.0f, 1.0f}, {3.0f, 2.0f, 1.0f}, {3.0f, 2.0f, 1.0f}, 5.0f));
	int krok_czasowy = 10;


	std::ofstream plik_wyjsciowy = zainicjalizuj_plik_wejsciowy(ciala, krok_czasowy, "wyjscie.txt");
	wypisz_krok_do_pliku(ciala, plik_wyjsciowy);

	for(int i = 0; i < 100; i++)
	{
		ciala[0].pos *= 1024;
		ciala[0].pos /= 1023;
		ciala[1].pos *= 1024;
		ciala[1].pos /= 1023;
		wypisz_krok_do_pliku(ciala, plik_wyjsciowy);
	}
	return 0;

}
