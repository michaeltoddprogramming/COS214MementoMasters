#ifndef ROADREPORT_H
#define ROADREPORT_H
#include "RoadIterator.h"
#include "Report.h"
#pragma once

class RoadReport : public Report
{
public:
    RoadReport();
    int[[]] generalReport() override;
    ~RoadReport();

private:
RoadIterator *createIterator();
};

#endif