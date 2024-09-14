#pragma once
#include <iostream>
#include <vector>

class Champion {
public:
    // Atributos (propiedades)
    std::string nombre;
    std::string tipo;
    int health;
    int mana;
    int ap;
    int ad;
    std::vector<std::string> habilities;

    // Métodos (funciones)
    void atacar();
    void usar_habilidad(std::string habilidad);
    void comprar_objeto();
    void vender_objeto();
    void morir();
    void recibir_danio();
};

