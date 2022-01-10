#ifndef CIALO_H_
#define CIALO_H_

#include "vector.h"
#include <string>

class Cialo_Niebieskie // chyba nie ma sensu tutaj dawac czegokolwiek private, nie ma co sobie zycia utrudniac
{
public:
    Vector3d pos, vel, acc;
    double masa;
    std::string nazwa;
    Cialo_Niebieskie() {};
    Cialo_Niebieskie(std::string nazwa, Vector3d pos, Vector3d vel, Vector3d acc, double mass);   




};





#endif