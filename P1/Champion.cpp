#include "Champion.h"
#include <iostream>


void Champion::atacar() {
    std::cout << nombre << " ataca!" << std::endl;
}

void Champion::usarHabilidad(std::string habilidad) {
    std::cout << nombre << " usa " << habilidad << std::endl;
}