#pragma once
#include "Camion.h"
class CasaRodante : public Camion {
public:
    int cantidadCamas;
    int capacidadAguaPotable;
    int capacidadTanqueNegro;
    bool cocinaEquipada;
    bool banoCompleto;

    // Métodos específicos de casas rodantes
    void extenderToldo();
    void retraerToldo();
    void llenarTanqueAgua();
    void vaciarTanqueNegro();
    void mostrar_informacion() override;
};
