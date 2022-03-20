using namespace std;
#include "Player.h"

Player::Player(){

}

void Player::setChoice(int num){
	this->choice = num;
}

int Player::getChoice(){
    return choice;
}


void Player::addMoveAmm(int count){
    this->ammountOfMoves = count;
}


int Player::getAmmMoves(){
    return ammountOfMoves;
}
