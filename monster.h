#pragma once
#include "20_2.cpp"

class Monster : public Creature
{
public:
	enum Type {
		DRAGON,
		ORC,
		SLIME,
		MAX_TYPES,
	};

	struct MonsterData {
		string name;
		char symb;
		int hp;
		int dmg;
		int gold;
	};
	static MonsterData monsters_array[MAX_TYPES];
	static  Monster getRndM() {
		return Monster(Type(rand() % MAX_TYPES));
	}

	Monster(Type type):
		Creature(monsters_array[type].name,
			monsters_array[type].symb,
			monsters_array[type].hp,
			monsters_array[type].dmg,
			monsters_array[type].gold
		)
	{}
};

Monster::MonsterData Monster::monsters_array[Monster::MAX_TYPES]
{
		{ "dragon", 'D', 20, 4, 100 },
		{ "orc", 'o', 4, 2, 25 },
		{ "slime", 's', 1, 1, 10 }
};