#ifndef ITERATOR_H
#define ITERATOR_H

#pragma once

class Iterator
{
public:
    Iterator();
    virtual bool isDone()=0;
    virtual int currentIndex()=0;
    ~Iterator();

private:

};

#endif