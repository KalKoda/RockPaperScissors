#pragma once
#include <string>
#include <iostream>
#include <string>

class Referee{
	private:
	    int Player1Move;
	    int Player2Move;
		//int winNumber;
		std::string winnerName;


	public:
	    Referee();
	    void setPlayer1Move(int P1move);
	    void setPlayer2Move(int P2move);
	    int getPlayer1Move();
	    int getPlayer2Move();

		std::string determineP1Move(int num);
		std::string determineP2Move(int num);

	    void check_winner();

		std::string getWinner();



};