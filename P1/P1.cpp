// P1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Champion.h"
#include "Item.h"

int main() {

#pragma region items
    Item rabadon;
    rabadon.name = "Rabadon";
    rabadon.value = 3200;
    rabadon.health = 0;
    rabadon.mana = 0;
    rabadon.ad = 0;
    rabadon.ap = 140;

    Item ludens;
    ludens.name = "Ludens Echo";
    ludens.value = 3000;
    ludens.health = 0;
    ludens.mana = 0;
    ludens.ad = 0;
    ludens.ap = 120;

    Item voidStaff;
    voidStaff.name = "Void Staff";
    voidStaff.value = 3200;
    voidStaff.health = 0;
    voidStaff.mana = 0;
    voidStaff.ad = 0;
    ludens.ap = 130;

    // Objeto para tanque
    Item sunfireCape;
    sunfireCape.name = "Sunfire Cape";
    sunfireCape.value = 2700;
    sunfireCape.health = 500;
    sunfireCape.mana = 0;
    sunfireCape.ad = 0;
    sunfireCape.ap = 0;

    // Objeto para tirador
    Item infinityEdge;
    infinityEdge.name = "Infinity Edge";
    infinityEdge.value = 3400;
    infinityEdge.health = 0;
    infinityEdge.mana = 0;
    infinityEdge.ad = 70;
    infinityEdge.ap = 0;

    // Objeto para jungla (híbrido)
    Item cinderhulk;
    cinderhulk.name = "Cinderhulk";
    cinderhulk.value = 2700;
    cinderhulk.health = 500;
    cinderhulk.mana = 0;
    cinderhulk.ad = 40;
    cinderhulk.ap = 40;

#pragma endregion


#pragma region Champions
    Champion ahri;
    ahri.nombre = "Ahri";
    ahri.tipo = "Mago";
    ahri.ad = 0;
    ahri.ap = 80;
    ahri.health = 800;
    ahri.habilities.push_back("Orb of Deception");
    ahri.oro = 3000,0;

    Champion ornn;
    ornn.nombre = "Ornn";
    ornn.tipo = "Tanque";
    ornn.ad = 50;
    ornn.ap = 0;
    ornn.health = 1200;
    ornn.habilities.push_back("Volcanic Rupture");

    Champion jinx;
    jinx.nombre = "Jinx";
    jinx.tipo = "Tirador";
    jinx.ad = 100;
    jinx.ap = 0;
    jinx.health = 550;
    jinx.habilities.push_back("Pow Pow");

#pragma endregion

    ahri.atacar();
    ahri.comprar_objeto(ludens);
    ahri.usar_habilidad("Orb of Deception");

    

    return 0;
}
