#include "Camion.h"
#include <iostream>

void Camion::cargar(int carga) {
	if (Camion::capacidad_carga >= carga) {
		std::cout<<"Se cargaron "<< carga << " toneladas al camion" << std::endl;
		return;
	}
	std::cout << "La carga excede la capacidad del camión" << std::endl;
}

void Camion::descargar(int carga) {
	if (Camion::capacidad_carga<carga) {
		std::cout << "No puedes descargar mas peso del que soporta el camion -_-" << std::endl;
		return;
	}
	std::cout << "Descargado" << std::endl;
}

void Camion::mostrar_informacion() {
	Vehiculo::mostrar_informacion();
	std::cout << "| Tipo de carga: " << tipo_carga
		<< " | Capacidad de carga (toneladas): " << capacidad_carga
		<< " | Numero de llantas: " << numero_llantas << std::endl;
}
