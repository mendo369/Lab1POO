#include "Champion.h"
#include "Item.h"
#include <iostream>


void Champion::atacar() {
    std::cout << nombre << " ataca!" << std::endl;
}

void Champion::usar_habilidad(std::string habilidad) {
    std::cout << nombre << " usa " << habilidad << std::endl;
}

void Champion::comprar_objeto(Item& objeto) {
    items.push_back(objeto);
    oro -= objeto.value;
    std::cout << objeto.name <<" comprado. Oro restante: "<< oro << std::endl;

};

void Champion::vender_objeto(Item& objeto) {
    items.erase(std::remove(items.begin(), items.end(), objeto), items.end());
    oro += oro * (1, 80);
    std::cout << objeto.name << " vendido. Oro restante: " << oro << std::endl;

};

void Champion::morir() {
    health = 0;
    std::cout << nombre <<" ha muerto." << std::endl;
};

void Champion::recibir_danio(int danio) {
    std::cout << nombre << " recibio " << danio << "de daño" << std::endl;
};