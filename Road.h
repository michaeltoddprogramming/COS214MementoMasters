#ifndef ROAD_H
#define ROAD_H
#include "Visitor.h";
#pragma once

class Road
{
public:
    Road();
  void accept(Visitor* visitor);
    ~Road();

private:

};

#endif