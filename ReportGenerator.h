#ifndef REPORTGENERATOR_H
#define REPORTGENERATOR_H
#include "Visitor.h"

#pragma once

class ReportGenerator : public Visitor
{
public:
    ReportGenerator();
     void visit(Road* road) override;
     void visit(Building* building) override;
     void visit(Citizen* citizen) override;
    ~ReportGenerator();

private:

};

#endif