#include "output.h"
#include <iostream>



std::ofstream zainicjalizuj_plik_wejsciowy(std::vector<Cialo_Niebieskie>& ciala, int krok_czasowy, std::string nazwa_pliku)
{
    std::ofstream plik(nazwa_pliku, std::ios::out);
    if(!plik.is_open())
    {
        std::cout << "Blad podczas obsludi pliku " << nazwa_pliku << std::endl;
        exit(EXIT_FAILURE);
    }
    plik << krok_czasowy << std::endl;
    plik << ciala.size() << std::endl;

    for(int i = 0; i < ciala.size(); i++)
    {
        plik << ciala[i].nazwa << std::endl;
    }
    plik << std::endl;
    return plik;     
}

void wypisz_krok_do_pliku(std::vector<Cialo_Niebieskie>& ciala, std::ofstream& plik_wyjsciowy)
{
    for(int i = 0; i < ciala.size(); i++)
    {
        plik_wyjsciowy << ciala[i].pos.x << " " << ciala[i].pos.y << " " << ciala[i].pos.z << std::endl;
    }
    plik_wyjsciowy << std::endl;
}