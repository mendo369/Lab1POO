#pragma once
#include "Auto.h"
class AutoDeportivo : public Auto {
public:
    int potencia; 
    double aceleracion_0_a_100; // En segundos
    int cantidad_asientos;
    bool techo_solar;
    bool turbo;

    // Métodos específicos de autos deportivos
    void hacerDrift();
    void activar_turbo();
    void desactivar_turbo();
    void mostrar_informacion() override;
};

