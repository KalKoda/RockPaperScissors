#pragma once

#include "Computer.h"

class RandomComputer : public Computer{
    public:
        //constructor
        RandomComputer();

        //decstructor
        ~RandomComputer();

        //void RandomMove();
        void CheckTurnAndDecide(int count);



};




