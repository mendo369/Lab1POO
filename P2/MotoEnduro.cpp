#include "MotoEnduro.h"
#include <iostream>;

void MotoEnduro::saltarObstaculo() {
    std::cout << "La moto de enduro ha saltado un obst�culo." << std::endl;
}

void MotoEnduro::atravesarBarro() {
    std::cout << "La moto de enduro ha atravesado una zona de barro." << std::endl;
}

void MotoEnduro::ajustarSuspension() {
    std::cout << "La suspensi�n de la moto de enduro ha sido ajustada." << std::endl;
}

void MotoEnduro::mostrar_informacion() {
    Vehiculo::mostrar_informacion();
    std::cout << "Suspensi�n delantera: " << suspensionDelantera << " mm" << std::endl;
    std::cout << "Suspensi�n trasera: " << suspensionTrasera << " mm" << std::endl;
    std::cout << "Arranque el�ctrico: " << (arranqueElectrico ? "S�" : "No") << std::endl;
    std::cout << "Llantas t�cticas: " << (llantasTacticas ? "S�" : "No") << std::endl;
}