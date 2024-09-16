#include "MotoEnduro.h"
#include <iostream>;

void MotoEnduro::saltarObstaculo() {
    std::cout << "La moto de enduro ha saltado un obstáculo." << std::endl;
}

void MotoEnduro::atravesarBarro() {
    std::cout << "La moto de enduro ha atravesado una zona de barro." << std::endl;
}

void MotoEnduro::ajustarSuspension() {
    std::cout << "La suspensión de la moto de enduro ha sido ajustada." << std::endl;
}

void MotoEnduro::mostrar_informacion() {
    Vehiculo::mostrar_informacion();
    std::cout << "Suspensión delantera: " << suspensionDelantera << " mm" << std::endl;
    std::cout << "Suspensión trasera: " << suspensionTrasera << " mm" << std::endl;
    std::cout << "Arranque eléctrico: " << (arranqueElectrico ? "Sí" : "No") << std::endl;
    std::cout << "Llantas tácticas: " << (llantasTacticas ? "Sí" : "No") << std::endl;
}