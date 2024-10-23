#ifndef BUILDING_H
#define BUILDING_H
#include "Visitor.h"
#pragma once

class Building
{
public:
    Building();
     void accept(Visitor *visitor);
    ~Building();

private:

};

#endif