#include "Auto.h"
#include <iostream>

void Auto::bajar_ventanas() {
	std::cout << "Ventanas abiertas"<<std::endl;
}

void Auto::subir_ventanas() {
	std::cout << "Ventanas cerradas" << std::endl;
}

void Auto::mostrar_informacion() {
    Vehiculo::mostrar_informacion(); // Llamar al m�todo de la clase base
    std::cout << "N�mero de puertas: " << numero_puertas
        << " | N�mero de llantas: " << numero_llantas
        << " | Techo plegable: " << (techo_plegable ? "S�" : "No")
        << " | Llanta de repuesto: " << (llanta_repuesto ? "S�" : "No")
        << " | Cajuela: " << (cajuela ? "S�" : "No") << std::endl;
}
