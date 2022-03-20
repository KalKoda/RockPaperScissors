#include "Referee.h"
#include <iostream>
using namespace std;
#include <string>

Referee::Referee(){
    //int Player1Move = 0;
    //int Player2Move =1 ;
	std::string winnerName = "Neither, it's a tie";
    //int winnerName = 4;
}

void Referee::setPlayer1Move(int P1move){
    this->Player1Move = P1move;
}
void Referee::setPlayer2Move(int P2move){
    this->Player2Move = P2move;
}
int Referee::getPlayer1Move(){
    return Player1Move;
}
int Referee::getPlayer2Move(){
    return Player2Move;
}

std::string Referee::determineP1Move(int num){
    if (num == 1){
        return "rock";
    }
    if (num== 2){
        return "paper";
    }
    if (num == 3){
        return "scissors";
    }
    else {
        return "wrong input try again";
    }
}

std::string Referee::determineP2Move(int num){
    if (num == 1){
        return "rock";
    }
    if (num== 2){
        return "paper";
    }
    if (num == 3){
        return "scissors";
    }
    else {
        return "wrong input try again";
    }
}



void Referee::check_winner(){ //Gotta make this follow the rules
    if ((Player1Move == 1 && Player2Move ==3 )|| (Player1Move == 2 && Player2Move ==1 )|| (Player1Move == 3 && Player2Move ==2 )){
        this->winnerName = "Human";

    }
    if ((Player1Move == 3 && Player2Move ==1 )|| (Player1Move == 1 && Player2Move ==2 )||( Player1Move == 2 && Player2Move ==3)){
        this->winnerName = "Computer";
    }
    if (Player1Move == Player2Move){
        this->winnerName = "no one, its a draw";
    }
}




std::string Referee::getWinner(){
    return winnerName;
}
