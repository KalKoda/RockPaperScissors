#pragma once

#include "computer.h"

class PaperDollComputer : public Computer{
    public:
        //constructor
        PaperDollComputer();

        void CheckTurnAndDecide(int count);


};