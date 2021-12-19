#include <iostream>

using namespace std;

class Fruit {
protected:
	string f_name;
	string f_color;
public:
	string getColor() { return f_color; }
	string getName() { return f_name; }
	
	Fruit(string color, string name):
		f_color{ color }, f_name{ name }
	{}
};

class Banana: public Fruit
{
public:
	Banana() :
		Fruit("yellow", "banana")
	{}
};

class Apple: public Fruit
{
public:
	Apple(string color, string name = "apple") :
		Fruit(color, name)
	{}
};

class Granny : public Apple {
public:
	Granny() :
		Apple("green", "granny apple") {}
};

int main() {
	Banana b;
	Apple a("red");
	Granny c;

	cout << b.getName() << " is " << b.getColor() << endl;
	cout << a.getName() << " is " << a.getColor() << endl;
	cout << c.getName() << " is " << c.getColor() << endl;
}