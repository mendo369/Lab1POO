#include "CasaRodante.h"
#include <iostream>;

void CasaRodante::extenderToldo() {
    std::cout << "El toldo se ha extendido." << std::endl;
}

void CasaRodante::retraerToldo() {
    std::cout << "El toldo se ha retraído." << std::endl;
}

void CasaRodante::llenarTanqueAgua() {
    std::cout << "El tanque de agua potable ha sido llenado." << std::endl;
}

void CasaRodante::vaciarTanqueNegro() {
    std::cout << "El tanque de aguas negras ha sido vaciado." << std::endl;
}

void CasaRodante::mostrar_informacion() {
    Vehiculo::mostrar_informacion();
    std::cout << "Cantidad de camas: " << cantidadCamas << std::endl;
    std::cout << "Capacidad de agua potable: " << capacidadAguaPotable << " litros" << std::endl;
    std::cout << "Capacidad del tanque de aguas negras: " << capacidadTanqueNegro << " litros" << std::endl;
    std::cout << "Cocina equipada: " << (cocinaEquipada ? "Sí" : "No") << std::endl;
    std::cout << "Baño completo: " << (banoCompleto ? "Sí" : "No") << std::endl;
}