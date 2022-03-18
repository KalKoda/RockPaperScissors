
#include "PaperDoll.h"


PaperDollComputer::PaperDollComputer(){
    setRobChoice(2);
}

void PaperDollComputer::CheckTurnAndDecide(int count){
    if (count % 3 ==1){
        setRobChoice(2);
    }
    if (count % 3 ==2){
        setRobChoice(3);
    }
    if (count % 3 ==0){
        setRobChoice(3);
    }

}
