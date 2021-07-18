#pragma once
#include "C_Medium.h"
class C_Chain_mail : public C_Medium {
protected:
	int _chain_quality;
public:
	Ñ_Chain_mail() : C_Medium() {
		this->_chain_quality = 9;
	}
	Ñ_Chain_mail(int _strength, int _weight, int _chain_quality)
		: C_Medium(_strength, _weight) {
		this->_chain_quality = _chain_quality;
	}

	virtual void breaking() {
		std::cout << "chain mail broken";
	}
	virtual void taking_hit() {
		std::cout << "chain mail took hit";
	}
};