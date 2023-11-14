#pragma once
#include "Inventory.h"

struct Hero
{
	short health = 100;
	int damage = 15;
	short intelegence = 2;
	short dexterity = 0;
	short range;
	char choise[20] = "";
	char choise1[20] = "";
	int choise2;
	int root[20] = { 0 };

	Inventory inventory;
};