#pragma once

class Player{
	private:
        int choice;
        int ammountOfMoves;
    public:
        Player();
        int getChoice();
        void setChoice(int num);
        int getAmmMoves();
        void addMoveAmm(int count);

    };