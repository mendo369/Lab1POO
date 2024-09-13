#include "Volqueta.h"
#include <iostream>

void Volqueta::angulo_volcado(int angulo) {
	std::cout << "Vaciando carga con un angulo de " << angulo <<" grados" << std::endl;
}

void Volqueta::bloquear_diferencial() {
	std::cout << "Difenrencial bloqueado. Traccion mejorada" << std::endl;
}

void Volqueta::desbloquear_diferencial() {
	std::cout << "Difenrencial desbloqueado" << std::endl;
}

