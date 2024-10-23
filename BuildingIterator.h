#ifndef BUILDINGITERATOR_H
#define BUILDINGITERATOR_H
#include "Iterator.h"
#include "Building.h"
#pragma once

class BuildingIterator : public Iterator
{
public:
    BuildingIterator();
    bool isDone() override;
    int currentIndex() override;
    Building* next();
    Building* first();
    ~BuildingIterator();



private:

};

#endif