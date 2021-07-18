#include <iostream>

#include "C_Halberd.h"
#include "C_Sword.h"

#include "C_Plate.h"
#include "C_Leather.h"

int main()
{
	C_Halberd halberd;
	halberd.poke();
	C_Sword sword;
	sword.attack();

	C_Plate plate;
	plate.taking_hit();
	C_Leather leather;
	leather.breaking();
}