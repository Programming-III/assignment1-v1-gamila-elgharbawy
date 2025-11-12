#ifndef MAMMAL_H
#define MAMMAL_H
#include<iostream>
#include<string>
#include"Animal.h"
using namespace std;
class Mammal :public Animal {

private:
	string furColour;
public:
	Mammal();
	Mammal(string n, int a, bool isHungry,string furColour);
		~Mammal();
	void setName(string furColour);
	string getfurColour();

#endif

};

