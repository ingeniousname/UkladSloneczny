#include "input.h"

void wczytaj_dane_poczatkowe(std::string nazwa_pliku, std::vector<Cialo_Niebieskie>& ciala, int& krok_czasowy)
{
    std::ifstream plik(nazwa_pliku, std::ios::in);
    int liczba_cial;
    plik >> liczba_cial;
    plik >> krok_czasowy;
    for(int i = 0; i < liczba_cial; i++)
    {
        ciala.push_back(Cialo_Niebieskie());
        plik >> ciala[i].nazwa;
        plik >> ciala[i].masa;
        plik >> ciala[i].pos.x;
        plik >> ciala[i].pos.y;
        plik >> ciala[i].pos.z;
        plik >> ciala[i].vel.x;
        plik >> ciala[i].vel.y;
        plik >> ciala[i].vel.z;
        ciala[i].acc = {0, 0, 0};
    }
    plik.close();
}






