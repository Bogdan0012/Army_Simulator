#pragma once
#include "C_Hand_weapon.h"

class C_Saber : public C_Hand_weapon {
public:
	virtual void protect() {
		std::cout << "protected by saber";
	}
	virtual void attack() {
		std::cout << "attack by saber";
	}
}; 