#include "Cialo.h"



Cialo_Niebieskie::Cialo_Niebieskie(std::string nazwa, Vector3d pos, Vector3d vel, Vector3d acc, double mass)
{
    this->nazwa = nazwa;
    this->pos = pos;
    this->vel = vel;
    this->acc = acc;
    this->masa = mass;
}
