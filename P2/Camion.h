#pragma once
#include "Vehiculo.h"
#include <string>

class Camion : public Vehiculo
{
	public:
		int capacidad_carga;
		std::string tipo_carga;
		int numero_llantas;

		void cargar(int carga);
		void descargar(int carga);
		void mostrar_informacion() override;
};

