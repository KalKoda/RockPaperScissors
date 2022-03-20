
#include "Crescendo.h"


CrescendoComputer::CrescendoComputer(){
    setChoice(1);
}

void CrescendoComputer::CheckTurnAndDecide(int count){
    if (count % 3 ==1){
        setChoice(1);
    }
    if (count % 3 ==2){
        setChoice(2);
    }
    if (count % 3 ==0){
        setChoice(3);
    }

}
