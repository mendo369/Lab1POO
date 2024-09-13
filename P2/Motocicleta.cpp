#include "Motocicleta.h"
#include <iostream>

void Motocicleta::mostrar_informacion() {
	Vehiculo::mostrar_informacion();
    std::cout << "Tipo: " << tipo
        << " | Freno trasero: " << freno_trasero
        << " | Freno delantero: " << freno_delantero << std::endl;
}