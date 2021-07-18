#pragma once
#include "C_Bow.h"

class C_Crossbow : public C_Bow {
public:
	virtual void power_shooting() {
		std::cout << "power shooting"
	}
	virtual void charging() {
		std::cout << "crossbow charged";
	}
};