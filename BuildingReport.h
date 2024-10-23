#ifndef BUILDINGREPORT_H
#define BUILDINGREPORT_H
#include "Report.h"
#include "BuildingIterator.h"
#pragma once

class BuildingReport : public Report
{
public:
    BuildingReport();
    int[[]] generalReport() override;
    ~BuildingReport();

private:
BuildingIterator *createIterator();
};

#endif