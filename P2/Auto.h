#pragma once
#include "Vehiculo.h"

class Auto : public Vehiculo
{
	public:
		int numero_puertas;
		int numero_llantas;
		bool cajuela;
		bool llanta_repuesto;
		bool techo_plegable;

		void subir_ventanas();
		void mostrar_informacion() override;
		void bajar_ventanas();
};

