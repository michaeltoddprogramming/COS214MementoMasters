#ifndef CITIZEN_H
#define CITIZEN_H
#include "Visitor.h"
#pragma once

class Citizen
{
public:
    Citizen();
    void accept(Visitor *visitor);
    ~Citizen();

private:

};

#endif