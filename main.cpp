#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Randomcomputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Tournament.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
    int count =0;
    //player player;
    Human player1;
	RandomComputer Computer1;
	/*AvalancheComputer player1;
	BureaucratComputer player2;
	ToolboxComputer player3;
	CrescendoComputer player4;
	PaperDollComputer player5;
	FistfullODollarsComputer player6;
	Referee RPCRef;*/

    int x=0;
    while (true){
       cout<<"If you would like to play, press any button, if you want to exit, press 9: ";
        cin>> x;
        if (x == 9){
            break;
        }


        player1.ask_move(); //takes human's input
        RPCRef.setPlayer1Move(player1.getChoice());
        RPCRef.setPlayer2Move(Computer1.getChoice());



        count++;
        cout << "Count is " << count << endl;

        Computer1.CheckTurnAndDecide(count+1);  //+1 skips makes it not start at 0 idk why but it works
        Computer1.addMoveAmm(count); ///only for ones that change turn on loop



        ///Current tornament///
        cout << "human move is... " << RPCRef.determineP1Move(RPCRef.getPlayer1Move()) << endl;
        cout << "and Computer move is... " << RPCRef.determineP2Move(RPCRef.getPlayer2Move()) << endl;

        RPCRef.check_winner();
        cout << "the winner is... " << RPCRef.getWinner() << "!!! \n";
        cout << "Game " << Computer1.getAmmMoves() << endl;


        }

        std::cout<<"exited: "<<std::endl;




	return 0;
}