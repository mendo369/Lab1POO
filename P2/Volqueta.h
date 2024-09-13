#pragma once
#include "Camion.h"

class Volqueta : public Camion {
    public:
        void angulo_volcado(int angulo);
        void bloquear_diferencial();
        void desbloquear_diferencial();
};

