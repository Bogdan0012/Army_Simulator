#pragma once
#include "C_Heavy.h"
class C_Plate : public C_Heavy {
protected:
	int _metal_quality;
public:
	Ñ_Plate() : C_Heavy() {
		this->_metal_quality = 11;
	}
	Ñ_Plate(int _strength, int _weight, int _metal_quality)
		: C_Heavy(_strength, _weight) {
		this->_metal_quality = _metal_quality;
	}

	virtual void breaking() {
		std::cout << "plate broken";
	}
	virtual void taking_hit() {
		std::cout << "plate took hit";
	}
};
