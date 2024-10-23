#ifndef ROADITERATOR_H
#define ROADITERATOR_H
#include "Iterator.h"
#include "Road.h"
#pragma once

class RoadIterator : public Iterator
{
public:
    RoadIterator();
     bool isDone() override;
    int currentIndex() override;
    Road* next();
    Road* first();
    ~RoadIterator();

private:

};

#endif