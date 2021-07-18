#pragma once
#include "C_Weapon.h"

class C_Pole : public C_Weapon {
public:
	virtual void burning() {
		std::cout << "burned";
	}
};