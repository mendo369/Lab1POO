#include "Champion.h"
#include "Item.h"
#include <iostream>


void Champion::atacar(Champion& campeon) {
    std::cout << nombre << " ataca a "<<campeon.nombre << std::endl;
    int danio = ad+ap;
    campeon.recibir_danio(danio);
}

void Champion::usar_habilidad(std::string habilidad) {
    std::cout << nombre << " usa " << habilidad << std::endl;
}

void Champion::comprar_objeto(Item& objeto) {
    items.push_back(objeto);
    oro -= objeto.value;
    ad += objeto.ad;
    ap += objeto.ap;
    health += objeto.health;
    mana += objeto.health;
    std::cout<<nombre<<" compró " << objeto.name << ". Oro restante: " << oro << std::endl;
};

void Champion::vender_objeto(Item& objeto) {
    items.erase(std::remove(items.begin(), items.end(), objeto), items.end());
    oro = oro * (1.80);
    ad -= objeto.ad;
    ap -= objeto.ap;
    health -= objeto.health;
    mana -= objeto.health;
    std::cout << nombre << " vendió " << objeto.name << ". Oro restante: " << oro << std::endl;
};

void Champion::morir() {
    health = 0;
    std::cout << nombre <<" ha muerto." << std::endl;
};

void Champion::recibir_danio(int danio) {
    health -= danio;

    if (health <= 0) {
        Champion::morir();
        return;
    }

    std::cout << nombre << " recibio " << danio << " de daño. Vida restante: " << health<< std::endl;
};