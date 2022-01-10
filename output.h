#ifndef OUTPUT_H_
#define OUTPUT_H_

#include <vector>
#include "Cialo.h"
#include <fstream>


// proponowana struktura pliku wyjsciowego
//
// 1. NAGLOWEK
// {data rozpoczecia symulacji} (trzeba zastanowic sie czy to ma sens??)
// {krok czasowy w symulacji}
// {liczba symulowanych cial}
//
// opis cial (indeksy tak jak w tablicy vector)
//
// {indeks ciala} {nazwa ciala}
// ...
// {indeks ciala n} {nazwa ciala n}
//
//
// 2. WLASCIWE DANE
//
// {indeks ciala} {pos.x} {pos.y} {pos.z}
// ...
// {indeks ciala} {pos.x} {pos.y} {pos.z}




std::ofstream zainicjalizuj_plik_wejsciowy(std::vector<Cialo_Niebieskie>& ciala, int krok_czasowy, std::string nazwa_pliku);
void wypisz_krok_do_pliku(std::vector<Cialo_Niebieskie>& ciala, std::ofstream& plik_wyjsciowy);




#endif