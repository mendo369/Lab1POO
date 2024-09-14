#pragma once
#include "Motocicleta.h"

class MotoEnduro : public Motocicleta {
public:
    int suspensionDelantera; // En mil�metros
    int suspensionTrasera; // En mil�metros
    bool arranqueElectrico;
    bool llantasTacticas;

    // M�todos espec�ficos de motos de enduro
    void saltarObstaculo();
    void atravesarBarro();
    void ajustarSuspension();
    void mostrar_informacion() override;
};

