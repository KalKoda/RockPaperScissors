//has a random choice
#include <time.h>
#include "randomcomputer.h"
#include <iostream>

RandomComputer::RandomComputer(){
    //int choice = 0;
}


void RandomComputer::RandomMove(){
    srand(time(NULL));
    int number = (rand() % 3)+1;
    setChoice(number);
}

RandomComputer::~RandomComputer(){

}