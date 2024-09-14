#pragma once
#include <iostream>
#include <vector>
#include "Item.h"

class Champion {
public:
    // Atributos (propiedades)
    std::string nombre;
    std::string tipo;
    int health;
    int mana;
    int ap;
    int ad;
    double oro;
    std::vector<std::string> habilities;
    std::vector<Item> items;


    // Métodos (funciones)
    void atacar(Champion& campeon);
    void usar_habilidad(std::string habilidad);
    void comprar_objeto(Item& objeto);
    void vender_objeto(Item& objeto);
    void morir();
    void recibir_danio(int danio);
};

