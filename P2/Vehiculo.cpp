#include "Vehiculo.h"
#include <iostream>

void Vehiculo::acelerar() {
	std::cout << "acelerando"<<std::endl;
}

void Vehiculo::mostrar_informacion() {
    std::cout << "Modelo: " << modelo
        << " | A�o: " << anio
        << " | Marca: " << marca
        << " | Cilindraje: " << cilindraje << std::endl;
}