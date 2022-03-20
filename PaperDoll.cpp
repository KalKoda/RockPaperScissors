
#include "PaperDoll.h"


PaperDollComputer::PaperDollComputer(){
    setChoice(2);
}

void PaperDollComputer::CheckTurnAndDecide(int count){
    if (count % 3 ==1){
        setChoice(2);
    }
    if (count % 3 ==2){
        setChoice(3);
    }
    if (count % 3 ==0){
        setChoice(3);
    }

}
