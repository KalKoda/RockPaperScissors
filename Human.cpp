#include "Human.h"
#include <iostream>
using namespace std;

Human::Human(){
}


void Human::ask_move(){
    int decision;
	cout << "Please type 1 for Rock, 2 for Paper, and 3 for Scissors: " << endl;
	cin >> decision;
	this->setChoice(decision);
}

