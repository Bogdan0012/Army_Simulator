#pragma once
#include <iostream>
class C_Armor {
protected:
	int _strength;
	int _weight;
public:
	C_Armor() {
		this->_strength = this->_weight = 0;
	}
	C_Armor(int _strength, int _weight) {
		this->_strength = _strength;
		this->_weight = _weight;
	}

	virtual void breaking() {
		std::cout << "armor broken";
	}
	virtual void taking_hit() {
		std::cout << "armor took hit";
	}
};