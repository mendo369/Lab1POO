#include "MotoDeportiva.h"
#include <iostream>

void MotoDeportiva::activar_antiwheeling() {
    if (MotoDeportiva::antiwheeling) {
        std::cout << "Sistema anti-wheelie activado." << std::endl;
        return;
    }
    std::cout << "Esta motocicleta no posee ese atributo" << std::endl;
}

void MotoDeportiva::desactivar_antiwheeling() {
    if (MotoDeportiva::antiwheeling) {
        std::cout << "Sistema anti-wheelie desactivado." << std::endl;
        return;
    }
    std::cout << "Esta motocicleta no posee ese atributo" << std::endl;
}

void MotoDeportiva::activar_velocidad_crucero() {
    if (MotoDeportiva::velocidad_crucero) {
        std::cout << "Control de crucero activado." << std::endl;
        return;
    }
    std::cout << "Esta motocicleta no posee ese atributo" << std::endl;
}

void MotoDeportiva::desactivar_velocidad_crucero() {
    if (MotoDeportiva::velocidad_crucero) {
        std::cout << "Control de crucero desactivado." << std::endl;
        return;
    }
    std::cout << "Esta motocicleta no posee ese atributo" << std::endl;

}

void MotoDeportiva::frenar(bool ayuda) {
    if (ayuda) {
        if (abs) {
            std::cout << "Frenando con ABS activado." << std::endl;
        }
        else {
            std::cout << "Frenando sin ABS." << std::endl;
        }
    }
    else {
        std::cout << "Frenando suavemente." << std::endl;
    }
}

void MotoDeportiva::mostrar_informacion() {
    Motocicleta::mostrar_informacion();
    std::cout << " | Anti Wheeling: " << (antiwheeling ? "Si" : "No")
        << " | Velocidad crucero: " << (velocidad_crucero ? "Si" : "No") <<
        " | ABS: " << (abs ? "Si" : "No") <<
        std::endl;
}