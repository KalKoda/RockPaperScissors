#include "human.h"
#include "computer.h"
#include "referee.h"
#include "randomcomputer.h"
#include "avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crechendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
    int count =0;
    Human player1;
	//RandomComputer Computer1;
	//AvalancheComputer Computer1;
	//BureaucratComputer Computer1;
	//ToolboxComputer Computer1;
	//CrechendoComputer Computer1;
	//PaperDollComputer Computer1;
	FistfullODollarsComputer Computer1;
	Referee RPCRef;

    int x=0;
    while (true){
       cout<<"If you would like to play, press any button, if you want to exit, press 9: ";
        cin>> x;
        if (x == 9){
            break;
        }

        ///HUMAN/////

        player1.ask_move(); //takes human's input
        RPCRef.Player1Move(player1.getChoice());

        ///COMPUTER///

        //Computer1.RandomMove(); //generates random number between 1-3
        RPCRef.Player2Move(Computer1.getRobChoice());
        count++;
        cout << "Count is " << count << endl;

        Computer1.addMoveAmm(count);
        Computer1.CheckTurnAndDecide(count+1);  //+1 skips makes it not start at 0 idk why but it works


        ///Current tornament///
        cout << "human move is... " << RPCRef.determineMove(RPCRef.getPlayer1Move()) << endl;
        cout << "and Computer move is... " << RPCRef.determineMove(RPCRef.getPlayer2Move()) << endl;

        RPCRef.check_winner();
        cout << "the winner is... " << RPCRef.getWinner() << "!!! \n";
        cout << "Game " << Computer1.getAmmMoves() << endl;


        }

        std::cout<<"exited: "<<std::endl;





	return 0;
}