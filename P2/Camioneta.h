#pragma once
#include "Auto.h"
class Camioneta : public Auto
{
	public:
		bool platon;
		bool exploradoras;

		void encender_exploradoras();
		void apagar_exploradoras();
		void mostrar_informacion() override;
};

