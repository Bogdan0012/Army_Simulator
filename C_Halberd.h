#pragma once
#include "C_Spear.h"

class C_Halberd : public C_Spear {
public:
	virtual void burning() {
		std::cout << "halberd burned";
	}
	virtual void poke() {    // �����
		std::cout << "poke by halberd";
	}
	virtual void chop() {    // �������
		std::cout << "chop attack by halberd";
	}
}; 