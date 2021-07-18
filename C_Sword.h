#pragma once
#include "C_Hand_weapon.h"

class C_Sword : public C_Hand_weapon {
public:
	virtual void protect() {
		std::cout << "protected by sword";
	}
	virtual void attack() {
		std::cout << "attack by sword";
	}
}; 