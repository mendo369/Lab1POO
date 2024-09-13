#pragma once
#include <string>
#include "Vehiculo.h"

class Motocicleta : public Vehiculo
{
	public:
		std::string tipo;
		std::string freno_trasero;
		std::string freno_delantero;
		std::string caja_cambios;

		void mostrar_informacion() override;

};

