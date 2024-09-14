#pragma once
#include "Motocicleta.h"

class MotoEnduro : public Motocicleta {
public:
    int suspensionDelantera; // En milímetros
    int suspensionTrasera; // En milímetros
    bool arranqueElectrico;
    bool llantasTacticas;

    // Métodos específicos de motos de enduro
    void saltarObstaculo();
    void atravesarBarro();
    void ajustarSuspension();
    void mostrar_informacion() override;
};

