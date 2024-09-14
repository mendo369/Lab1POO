// P2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Vehiculo.h"

#include "Auto.h"
#include "AutoDeportivo.h"
#include "Camioneta.h"

#include "Camion.h"
#include "CasaRodante.h"
#include "Volqueta.h"

#include "Motocicleta.h"
#include "MotoDeportiva.h"
#include "MotoEnduro.h"

void mostrarMenu() {
    std::cout << "Seleccione el tipo de vehiculo que desea crear:" << std::endl;
    std::cout << "1. Auto" << std::endl;
    std::cout << "2. Auto Deportivo" << std::endl;
    std::cout << "3. Camioneta" << std::endl;
    std::cout << "4. Camion" << std::endl;
    std::cout << "5. Casa Rodante" << std::endl;
    std::cout << "6. Volqueta" << std::endl;
    std::cout << "7. Motocicleta" << std::endl;
    std::cout << "8. Moto Deportiva" << std::endl;
    std::cout << "9. Moto Enduro" << std::endl;
}

template <typename T>
T obtenerEntradaNumerica(const std::string& mensaje) {
    T valor;
    while (true) {
        std::cout << mensaje;
        std::cin >> valor;

        if (std::cin.fail()) {  // Si la entrada no es válida
            std::cin.clear();   // Limpiar el estado de error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Descartar la entrada inválida
            std::cout << "Entrada inválida. Por favor, ingrese un número válido." << std::endl;
        }
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Descartar cualquier entrada extra
            break;
        }
    }
    return valor;
}

// Función para crear un Auto
void crearAuto() {
    Auto miAuto;
    std::cout << "Marca del Auto: ";
    std::cin >> miAuto.marca;
    std::cout << "Modelo del Auto: ";
    std::cin >> miAuto.modelo;
    miAuto.anio = obtenerEntradaNumerica<int>("Año del Auto: ");
    miAuto.cilindraje = obtenerEntradaNumerica<int>("Cilindraje: ");
    miAuto.numero_puertas = obtenerEntradaNumerica<int>("Número de puertas: ");
    miAuto.numero_llantas = obtenerEntradaNumerica<int>("Número de llantas: ");
    miAuto.cajuela = obtenerEntradaNumerica<bool>("Tiene cajuela? (1: sí, 0: no): ");
    miAuto.llanta_repuesto = obtenerEntradaNumerica<bool>("Tiene llanta de repuesto? (1: sí, 0: no): ");
    miAuto.techo_plegable = obtenerEntradaNumerica<bool>("Techo plegable? (1: sí, 0: no): ");
    std::cout << "Se creó el auto:" << std::endl;
    std::cout << std::endl;
    miAuto.mostrar_informacion();
}


// Función para crear una Camioneta
void crearCamioneta() {
    Camioneta miCamioneta;
    std::cout << "Marca de la Camioneta: ";
    std::cin >> miCamioneta.marca;
    std::cout << "Modelo de la Camioneta: ";
    std::cin >> miCamioneta.modelo;
    miCamioneta.anio = obtenerEntradaNumerica<int>("Año de la Camioneta: ");
    miCamioneta.cilindraje = obtenerEntradaNumerica<int>("Cilindraje: ");
    miCamioneta.numero_puertas = obtenerEntradaNumerica<int>("Número de puertas: ");
    miCamioneta.numero_llantas = obtenerEntradaNumerica<int>("Número de llantas: ");
    miCamioneta.platon = obtenerEntradaNumerica<bool>("Tiene platón? (1: sí, 0: no): ");
    miCamioneta.exploradoras = obtenerEntradaNumerica<bool>("Tiene exploradoras? (1: sí, 0: no): ");
    std::cout << "Se creó la camioneta: " << std::endl;
    std::cout << std::endl;
    miCamioneta.mostrar_informacion();
}

// Función para crear un Camión
void crearCamion() {
    Camion miCamion;
    std::cout << "Marca del Camión: ";
    std::cin >> miCamion.marca;
    std::cout << "Modelo del Camión: ";
    std::cin >> miCamion.modelo;
    miCamion.anio = obtenerEntradaNumerica<int>("Año del Camión: ");
    miCamion.cilindraje = obtenerEntradaNumerica<int>("Cilindraje: ");
    miCamion.capacidad_carga = obtenerEntradaNumerica<int>("Capacidad de carga (en toneladas): ");
    miCamion.tipo_carga = obtenerEntradaNumerica<std::string>("Tipo de carga: ");
    miCamion.numero_llantas = obtenerEntradaNumerica<int>("Número de llantas: ");
    std::cout << "Se creó el camion: " << std::endl;
    std::cout << std::endl;
    miCamion.mostrar_informacion();
}

void crearVolqueta() {
    Volqueta miVolqueta;
    std::cout << "Marca de la volqueta: ";
    std::cin >> miVolqueta.marca;
    std::cout << "Modelo de la volqueta: ";
    std::cin >> miVolqueta.modelo;
    miVolqueta.anio = obtenerEntradaNumerica<int>("Año de la volqueta: ");
    miVolqueta.cilindraje = obtenerEntradaNumerica<int>("Cilindraje: ");
    miVolqueta.capacidad_carga = obtenerEntradaNumerica<int>("Capacidad de carga (en toneladas): ");
    miVolqueta.tipo_carga = obtenerEntradaNumerica<std::string>("Tipo de carga: ");
    miVolqueta.numero_llantas = obtenerEntradaNumerica<int>("Número de llantas: ");
    std::cout << "Se creó la volqueta: " << std::endl;
    std::cout << std::endl;
    miVolqueta.mostrar_informacion();
}

void crearMotocicleta() {
    Motocicleta miMotocicleta;
    std::cout << "Marca de la moto: ";
    std::cin >> miMotocicleta.marca;
    std::cout << "Modelo de la moto: ";
    std::cin >> miMotocicleta.modelo;
    miMotocicleta.anio = obtenerEntradaNumerica<int>("Año de la moto: ");
    miMotocicleta.cilindraje = obtenerEntradaNumerica<int>("Cilindraje: ");
    std::cout << "Caja de cambios: ";
    std::cin>>miMotocicleta.caja_cambios;
    std::cout << "Freno delantero: ";
    std::cin >> miMotocicleta.freno_delantero;
    std::cout << "Freno trasero: ";
    std::cin >> miMotocicleta.freno_trasero;
    std::cout << "Se creó la motocicleta: " << std::endl;
    std::cout << std::endl;
    miMotocicleta.mostrar_informacion();
}

void crearMotocicletaDeportiva() {
    MotoDeportiva miMotocicleta;
    std::cout << "Marca de la moto: ";
    std::cin >> miMotocicleta.marca;
    std::cout << "Modelo de la moto: ";
    std::cin >> miMotocicleta.modelo;
    miMotocicleta.anio = obtenerEntradaNumerica<int>("Año de la moto: ");
    miMotocicleta.cilindraje = obtenerEntradaNumerica<int>("Cilindraje: ");
    std::cout << "Caja de cambios: ";
    std::cin >> miMotocicleta.caja_cambios;
    std::cout << "Freno delantero: ";
    std::cin >> miMotocicleta.freno_delantero;
    std::cout << "Freno trasero: ";
    std::cin >> miMotocicleta.freno_trasero;
    miMotocicleta.antiwheeling = obtenerEntradaNumerica<bool>("Tiene Anti Wheeling? (1: sí, 0: no): ");
    miMotocicleta.abs = obtenerEntradaNumerica<bool>("Tiene frenos ABS? (1: sí, 0: no): ");
    miMotocicleta.velocidad_crucero = obtenerEntradaNumerica<bool>("Tiene velocidad crucero? (1: sí, 0: no): ");
    std::cout << "Se creó la motocicleta: " << std::endl;
    std::cout << std::endl;
    miMotocicleta.mostrar_informacion();
}

int main() {
    int opcion;
    bool continuar = true;

    while (continuar) {
        mostrarMenu();
        std::cout << "Ingrese una opción (0 para salir): ";
        std::cin >> opcion;

        switch (opcion) {
        case 1:
            crearAuto();
            break;
        case 2:
            std::cout << "Función para crear Auto Deportivo aún no implementada." << std::endl;
            break;
        case 3:
            crearCamioneta();
            break;
        case 4:
            crearCamion();
            break;
        case 5:
            std::cout << "Función para crear Casa Rodante aún no implementada." << std::endl;
            break;
        case 6:
            crearVolqueta();
            break;
        case 7:
            crearMotocicleta();
            break;
        case 8:
            crearMotocicletaDeportiva();
            break;
        case 9:
            std::cout << "Función para crear Moto Enduro aún no implementada." << std::endl;
            break;
        case 0:
            continuar = false;
            break;
        default:
            std::cout << "Opción no válida. Intente nuevamente." << std::endl;
        }

        std::cout << std::endl; // Salto de línea para separar las iteraciones
    }
}
