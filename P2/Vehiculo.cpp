#include "Vehiculo.h"
#include <iostream>

void Vehiculo::encender() {
    std::cout << "Encendido" << std::endl;
};

void Vehiculo::apagar() {
    std::cout << "Apagado" << std::endl;
};

void Vehiculo::acelerar() {
	std::cout << "Acelerando"<<std::endl;
}

void Vehiculo::frenar() {
    std::cout << "Frenando" << std::endl;
}

void Vehiculo::mostrar_informacion() {
    std::cout 
        << "Marca: " << marca
        << " | Modelo: " << modelo
        << " | Año: " << anio
        << " | Cilindraje: " << cilindraje << std::endl;
}