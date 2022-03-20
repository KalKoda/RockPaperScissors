//has a random choice
#include <time.h>
#include "Randomcomputer.h"
#include <iostream>

RandomComputer::RandomComputer(){
    srand(time(NULL));
    int number = (rand() % 3)+1;
    setChoice(number);
}


RandomComputer::~RandomComputer(){

}

void RandomComputer::CheckTurnAndDecide(int count){
    if(getAmmMoves() != count){
        srand(time(NULL));
        int number = (rand() % 3)+1;
        setChoice(number);
    }
}