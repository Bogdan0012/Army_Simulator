#pragma once
#include "C_Light.h"
class C_Leather : public C_Light {
protected:
	int _leather_quality;
public:
	Ñ_Leather() : C_Light(){
		this->_leather_quality = 10;
	}
	Ñ_Leather(int _strength, int _weight, int _leather_quality)
		: C_Light(_strength, _weight){
		this->_leather_quality = _leather_quality;
	}

	virtual void breaking() {
		std::cout << "leather broken";
	}
	virtual void taking_hit() {
		std::cout << "leather took hit";
	}
};
