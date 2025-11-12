#ifndef VISITOR_H
#define VISITOR_H
#include<iostream>
#include<string>
using namespace std;
class Visitor {

private:
	string visitorName;
	int ticketsBought;
	
public:
	Visitor();
	Visitor(string vn, int t);
		~Visitor();
	void setvisitorName(string vn);
	void setticketsBought(int t);
	
	string getvisitorName();
	int getticketsBought();
	
	void displayInfo();
	


#endif

};

