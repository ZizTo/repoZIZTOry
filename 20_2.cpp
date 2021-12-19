#include <iostream>

using namespace std;

class Creature {
protected:
	string c_name;
	char c_symb;
	int c_hp;
	int c_dmg;
	int c_gold;
public:
	string getName() { return c_name; }
	char getSymb() { return c_symb; }
	int getHp() { return c_hp; }
	int getDmg() { return c_dmg; }
	int getGold() { return c_gold; }

	Creature(string name = "-", char symb = '-', int hp = 0, int dmg = 0, int gold = 0):
		c_name {name}, c_symb{symb}, c_hp{hp}, c_dmg{dmg}, c_gold{gold} 
	{}

	void minusHp(int dmg) { c_hp -= dmg; }
	bool isDead() { return c_hp <= 0; }
	void addGold(int gold) { c_gold += gold; }
};

class Player: public Creature {
private:
	int p_level;
public:
	Player(string name = "-"):
		p_level{1}, Creature(name, '@', 10, 1, 0)
	{}

	int getLvl() { return p_level; }

	void lvlUp() { c_dmg++; p_level++; }
	bool Won() { return p_level >= 20; }
};

class Monster : public Creature
{
public:
	enum Type {
		DRAGON,
		ORC,
		SLIME,
		MAX_TYPES,
	};
};

int main() {
	string name;
	cout << "Halo, your name: ";
	cin >> name;
	cout << endl;
	Player p(name);

	cout << p.getName() << ", you have " << p.getGold() << " gold" << endl;

}