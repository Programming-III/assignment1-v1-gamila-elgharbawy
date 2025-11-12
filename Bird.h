#ifndef BIRD_H
#define BIRD_H
#include<iostream>
#include<string>
#include"Animal.h"
using namespace std;
class Bird:public Animal {

private:
	float wingSpan;
public:
	Bird();
	Bird(string n, int a, bool isHungry,float wingSpan);
		~Bird();
	void setwingSpan(float wingSpan);
	string getwingSpan();

#endif

};

