#pragma once

#include "Computer.h"

class PaperDollComputer : public Computer{
    public:
        //constructor
        PaperDollComputer();

        void CheckTurnAndDecide(int count);


};