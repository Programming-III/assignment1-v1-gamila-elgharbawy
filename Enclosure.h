#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include<iostream>
#include<string>
#include"Animal.h"
using namespace std;
class Enclosure {
private:
	Animal* animal;
	int capacity;
	int currentCount;
public:
	Enclosure();
	Enclosure(Animal* animal, int capacity, int currentCount);
	~Enclosure();
	void setCapacity(int capacity);
	void setCurrentCount(int currentCount);
	int getCapacity();
	int getCurrentCount();
	void addAnimal(Animal* a);
	void displayAnimals();
#endif

};

