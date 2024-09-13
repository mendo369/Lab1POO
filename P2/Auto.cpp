#include "Auto.h"
#include <iostream>

void Auto::bajar_ventanas() {
	std::cout << "Ventanas abiertas"<<std::endl;
}

void Auto::subir_ventanas() {
	std::cout << "Ventanas cerradas" << std::endl;
}

void Auto::abrir_cajuela() {
    if (Auto::cajuela) {
        std::cout << "Cajuela abierta" << std::endl;
        return;
    }
    std::cout << "No tienes esta propiedad" << std::endl;
}

void Auto::cerrar_cajuela() {
    if (Auto::cajuela) {
        std::cout << "Cajuela cerrada" << std::endl;
        return;
    }
    std::cout << "No tienes esta propiedad" << std::endl;
}

void Auto::plegar_techo() {
    if (Auto::techo_plegable) {
        std::cout<<"Techo plegado"<<std::endl;
        return;
    }
    std::cout << "No tienes esta propiedad" << std::endl;
}

void Auto::desplegar_techo() {
    if (Auto::techo_plegable) {
        std::cout << "Techo desplegado" << std::endl;
        return;
    }
    std::cout << "No tienes esta propiedad" << std::endl;
}

void Auto::mostrar_informacion() {
    Vehiculo::mostrar_informacion(); // Llamar al método de la clase base
    std::cout << "Número de puertas: " << numero_puertas
        << " | Número de llantas: " << numero_llantas
        << " | Techo plegable: " << (techo_plegable ? "Sí" : "No")
        << " | Llanta de repuesto: " << (llanta_repuesto ? "Sí" : "No")
        << " | Cajuela: " << (cajuela ? "Sí" : "No") << std::endl;
}
