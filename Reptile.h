#ifndef REPTILE_H
#define REPTILE_H
#include<iostream>
#include<string>
#include"Animal.h"
using namespace std;
class Reptile :public Animal {

private:
	bool isVenomous;
public:
	Reptile();
	Reptile(string n, int a, bool isHungry,bool ven);
	~Reptile();
	void setisVenomous(bool ven);
	string getisVenomous();

#endif

};
