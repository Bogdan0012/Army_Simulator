#pragma once
#include "C_Weapon.h"

class C_Hand_weapon : public C_Weapon {
public:
	virtual void protect() {
		std::cout << "protected";
	}
}; 