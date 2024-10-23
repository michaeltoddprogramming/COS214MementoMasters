#ifndef CITIZENITERATOR_H
#define CITIZENITERATOR_H
#include "Iterator.h"
#include "Citizen.h"
#pragma once

class CitizenIterator : public Iterator
{
public:
    CitizenIterator();
    bool isDone() override;
    int currentIndex() override;
    Citizen* next();
    Citizen* first();
    ~CitizenIterator();

private:

};

#endif