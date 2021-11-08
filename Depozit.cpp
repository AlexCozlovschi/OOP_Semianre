
#include "Depozit.h"

Depozit::Depozit(float suma, float procent, const string &date) : Action(suma, procent, date) {}

float Depozit::getMonney() {
    return this->getSuma()*(100 + this->getProcent());
}
