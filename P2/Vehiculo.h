#pragma once
#include <string>
class Vehiculo
{
	public:
		std::string marca;
		std::string modelo;
		int anio;
		int cilindraje;

		void acelerar();
		void mostrar_informacion();
};

