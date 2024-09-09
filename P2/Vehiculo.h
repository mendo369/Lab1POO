#pragma once
#include <string>
class Vehiculo
{
	public:
		std::string marca;
		std::string modelo;
		int anio;
		int cilindraje;
		std::string combustible;

		void acelerar();
		virtual void mostrar_informacion();
};

