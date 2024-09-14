#pragma once
#include "Motocicleta.h"

class MotoDeportiva : public Motocicleta 
{
	public:
		bool antiwheeling;
		bool velocidad_crucero;
		bool abs;

		void activar_antiwheeling();
		void desactivar_antiwheeling();
		void activar_velocidad_crucero();
		void desactivar_velocidad_crucero();
		void frenar(bool ayuda);
		void mostrar_informacion() override;
};

