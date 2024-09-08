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
    void usarHabilidad(std::string habilidad);
};

