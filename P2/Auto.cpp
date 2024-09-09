#include "Auto.h"
#include <iostream>

void Auto::bajar_ventanas() {
	std::cout << "Ventanas abiertas"<<std::endl;
}

void Auto::subir_ventanas() {
	std::cout << "Ventanas cerradas" << std::endl;
}

void Auto::mostrar_informacion() {
    Vehiculo::mostrar_informacion(); // Llamar al método de la clase base
    std::cout << "Número de puertas: " << numero_puertas
        << " | Número de llantas: " << numero_llantas
        << " | Techo plegable: " << (techo_plegable ? "Sí" : "No")
        << " | Llanta de repuesto: " << (llanta_repuesto ? "Sí" : "No")
        << " | Cajuela: " << (cajuela ? "Sí" : "No") << std::endl;
}
