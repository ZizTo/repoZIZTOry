#include <iostream>
#include <ctime>
#include "monster.h"
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





int main() {
	srand(time(0));
	srand(time(0));

	string name;
	cout << "Halo, your name: ";
	cin >> name;
	cout << endl;
	Player p(name);

	cout << p.getName() << ", you have " << p.getGold() << " gold" << endl;

	while (!p.isDead() && !p.Won()) {
		Monster m = Monster::getRndM();
		cout << "You found " << m.getName() << " (" << m.getSymb() << ") on the field. You will(R or F): ";
		char input;
		cin >> input;
		while (!m.isDead()) {
			if (input == 'R') {
				if ((rand() % 2) == 1) { cout << "you run " << endl; continue; }
				else { p.minusHp(m.getDmg()); cout << "you been pinched " << endl; }
			}
			else if (input == 'F') { m.minusHp(p.getDmg()); }

			if (m.isDead()) { p.addGold(m.getGold()); break; }
			if (p.isDead()) { cout << "ti ded)"; }
		}
	}

}