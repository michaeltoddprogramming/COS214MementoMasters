#ifndef VISITOR_H
#define VISITOR_H
#include "Road.h"
#include "Building.h"
#include "Citizen.h"
#pragma once

class Road;
class Building;
class Citizen;

class Visitor
{
public:
    Visitor();
     virtual void visit(Road* road) = 0;
    virtual void visit(Building* building) = 0;
    virtual void visit(Citizen* citizen) = 0;
    ~Visitor();

private:

};

#endif