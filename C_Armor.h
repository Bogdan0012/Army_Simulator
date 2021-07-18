#pragma once
class C_Armor {
protected:
	int strength;
	int weight;
public:
	virtual void breaking() {
		std::cout << "armor break";
	}
	virtual void taking_hit() {
		std::cout << "armor took hit";
	}
};