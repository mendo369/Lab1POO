#include "AutoDeportivo.h"
#include <iostream>;

void AutoDeportivo::hacerDrift() {
    std::cout << "El auto deportivo est� haciendo un drift." << std::endl;
}

void AutoDeportivo::activar_turbo() {
    std::cout << "El turbo ha sido activado." << std::endl;
}

void AutoDeportivo::desactivar_turbo() {
    std::cout << "El turbo ha sido desactivado." << std::endl;
}

void AutoDeportivo::mostrar_informacion() {
    Vehiculo::mostrar_informacion();
    std::cout << "Potencia: " << potencia << " HP" << std::endl;
    std::cout << "Aceleraci�n de 0 a 100 km/h: " << aceleracion_0_a_100 << " segundos" << std::endl;
    std::cout << "Cantidad de asientos: " << cantidad_asientos << std::endl;
    std::cout << "Techo solar: " << (techo_solar ? "S�" : "No") << std::endl;
    std::cout << "Turbo: " << (turbo ? "Activado" : "Desactivado") << std::endl;
}