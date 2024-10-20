//
// Created by User on 2024/10/20.
//

#ifndef CITIZENMOOD_H
#define CITIZENMOOD_H

#include "string"
#include "vector"

using namespace std;

class CitizenMood {
    int health;

    public:
        virtual int getHealth() = 0;
        // todo! Implement change mood
    

};



#endif //CITIZENMOOD_H
