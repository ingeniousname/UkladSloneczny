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
// (cialo 0) {nazwa ciala}
// ...
// (cialo n - 1) {nazwa ciala n}
//
//
// 2. WLASCIWE DANE
//
// (cialo 0) {pos.x} {pos.y} {pos.z}
// ...
// (cialo n - 1) {pos.x} {pos.y} {pos.z}




std::ofstream zainicjalizuj_plik_wejsciowy(std::vector<Cialo_Niebieskie>& ciala, int krok_czasowy, std::string nazwa_pliku);
void wypisz_krok_do_pliku(std::vector<Cialo_Niebieskie>& ciala, std::ofstream& plik_wyjsciowy);




#endif