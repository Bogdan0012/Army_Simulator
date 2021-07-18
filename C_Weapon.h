#pragma once
class C_Weapon {
public:
	virtual void attack() {
		std::cout << "Attack";
	}
	virtual void breaking() {
		std::cout << "Break";
	}
};