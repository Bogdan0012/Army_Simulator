#pragma once
#include "C_Pole.h"

class C_Spear : public C_Pole {
public:
	virtual void burning() {
		std::cout << "spear burned";
	}
	virtual void poke() {
		std::cout << "poke by spear";
	}
};