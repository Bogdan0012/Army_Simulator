#pragma once
#include "C_Rifle.h"

class C_Bow : public C_Rifle {
public:
	virtual void aiming() {
		std::cout<< "aiming"
	}
	virtual void charging() {
		std::cout << "bow charged";
	}
};