#include "Camioneta.h"
#include <iostream>

void Camioneta::encender_exploradoras() {
	if (Camioneta::exploradoras) {
		std::cout << "Exploradoras encendidas" << std::endl;
		return;
	}
	std::cout << "Esta camioneta no posee exploradoras." << std::endl;
}

void Camioneta::apagar_exploradoras() {
	if (Camioneta::exploradoras) {
		std::cout << "Exploradoras apagadas" << std::endl;
		return;
	}
	std::cout << "Esta camioneta no posee exploradoras." << std::endl;
}

void Camioneta::mostrar_informacion() {
	Auto::mostrar_informacion();
	std::cout << " | Platon: " << (platon ? "Si" : "No")
	<< " | Exploradoras: " << (exploradoras ? "Si" : "No") << std::endl;
}