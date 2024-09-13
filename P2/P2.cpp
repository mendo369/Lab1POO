// P2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Vehiculo.h"
#include "Auto.h"
#include "Camion.h"
#include "Motocicleta.h"

int main()
{
    Auto miAuto;
    miAuto.marca = "Toyota";
    miAuto.modelo = "Corolla";
    miAuto.anio = 2022;
    miAuto.cilindraje = 1800;
    miAuto.numero_puertas = 4;
    miAuto.numero_llantas = 4;
    miAuto.techo_plegable = true;
    miAuto.llanta_repuesto = true;
    miAuto.cajuela = true;

    /*miAuto.acelerar(); 
    miAuto.mostrar_informacion();
    miAuto.bajar_ventanas();*/
    //miAuto.plegar_techo();

    Camion miCamion;
    miCamion.marca = "Mercedes";
    miCamion.modelo = "Mod1";
    miCamion.anio = 2012;
    miCamion.capacidad_carga = 40;
    miCamion.cilindraje = 4000;
    miCamion.combustible = "ACPM";
    miCamion.numero_llantas = 6;
    miCamion.tipo_carga = "Basura";

    miCamion.encender();
    miCamion.acelerar();
    miCamion.cargar(4);
    miCamion.descargar(1);
    miCamion.mostrar_informacion();
    miCamion.apagar();

    return 0;
}
