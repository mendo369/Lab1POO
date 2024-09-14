#pragma once
#include <iostream>
class Item
{
	public:
		int value;
		std::string name;
		int mana;
		int health;
		int ad;
		int ap; 

		bool operator==(const Item& other) const {
			return value == other.value &&
				name == other.name &&
				mana == other.mana &&
				health == other.health &&
				ad == other.ad &&
				ap == other.ap;
		}
};

