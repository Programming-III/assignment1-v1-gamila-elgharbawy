#include<iostream>
#include<string>
using namespace std;
#include"Animal.h"
#include"Mammal.h"
#include"Bird.h"
#include"Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"


Animal::Animal() {
	name = "";
	age = 0;
   isHungry = false;
}

Animal::Animal(string n, int a, bool isHungry) {
	name = n;
	age = a;
	isHungry = isHungry;
}
Animal::~Animal() {
}
void Animal :: setName(string n) {
	name = n;
}
void Animal::setAge(int a) {
	age = a;

}
void Animal::setIsHungry(bool isHungry) {
	isHungry = isHungry;
}
string Animal:: getName() {
	return name;
}
int Animal::getAge() {
	return age;
}
bool Animal::getIsHungry() {
	return isHungry;
}



void Animal::display() {
	cout << name << "( " << "Age:" << age << "," << isHungry << ")" << endl;
}

void Animal:: feed() {
	if (isHungry == true) {
		cout << "feed" << endl;
	}
	else {
		cout << "do not feed" << endl;
	}
}



Mammal::Mammal() {
	furColour = "";
}


Mammal::Mammal(string C) {
	furColour = C;
}
Mammal:: ~Mammal() {
}
void Mammal:: setName(string C) {
	furColour = C;
}
string Mammal:: getfurColour() {
	return furColour;
}




Bird::Bird() {
	wingSpan = 0;
}
Bird::Bird(float ws) {
	wingSpan = ws;
}
Bird::~Bird() {
}
void Bird :: setwingSpan(float ws) {
	wingSpan = ws;
}
string Bird:: getwingSpan() {
	return wingSpan;
}


Reptile::Reptile() {
	isVenomous = false;
}
Reptile::Reptile(bool ven) {
	isVenomous = ven;
}
Reptile::~Reptile() {
}
void Reptile::setisVenomous(bool ven) {
	bool isVenomous = ven;
}
string Reptile:: getisVenomous() {
	return  isVenomous;
}


Enclosure:: Enclosure() {
	int capacity = 0;
	int currentCount=0;
}
Enclosure::Enclosure(Animal* animal, int C, int CC) {
	Animal* animal = new Animal[capacity];
	int capacity =C ;
	int currentCount=CC;
}
Enclosure::~Enclosure() {
	delete[] animal;
}
void Enclosure::setCapacity(int c) {
	int capacity = c;
}
void Enclosure:: setCurrentCount(int CC) {
	int currentCount = CC;
}
int Enclosure::getCapacity() {
	return capacity;
}
int Enclosure::getCurrentCount() {
	return currentCount;
}
void Enclosure::addAnimal(Animal* a) {
	if (currentCount < capacity) {
		animal[currentCount + 1] = a;
		currentCount++;
	}
	else {
		cout << "no space" << endl;
	}
}
void Enclosure::displayAnimals() {
	cout << nimal.display() << endl;
}



Visitor::Visitor() {
	string visitorName = "";
	int ticketsBought = 0;
}
Visitor::Visitor(string vn, int t) {
	string visitorName = vn;
	int ticketsBought = t;
}
Visitor::~Visitor() {
}
void Visitor::setvisitorName(string vn) {
	string visitorName = vn;
}
void Visitor::setticketsBought(int t) {
	int ticketsBought = t;
}

string Visitor::getvisitorName() {
	return visitorName;
}
int Visitor::getticketsBought() {
	return ticketsBought;
}

void Visitor::displayInfo() {
	cout << "Visitor Info:" << endl;
	cout << "Name" << visitorName << endl;
	cout << "Tickets Bought" << ticketsBought << endl;
}
int main() {
	Animal a1("mammal", 5, true);
	Animal a2("Bird", 8, false);
	Animal a3("Reptile", 3, true);
	Visitor v("lina", 5)
	Enclosure e(6, 2);

	a1.display();
	a2.display();
	a3.display();
	v.displayInfo();
		


}


