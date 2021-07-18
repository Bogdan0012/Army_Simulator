#pragma once
#include "C_Weapon.h"

class C_Rifle : public C_Weapon {
public:
	virtual void charging() {
		std::cout << "charged";
	}
};