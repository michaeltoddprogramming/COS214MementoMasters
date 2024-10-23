#ifndef CITIZENREPORT_H
#define CITIZENREPORT_H
#include "CitizenIterator.h"
#include "Report.h"
#pragma once

class CitizenReport : public Report
{
public:
    CitizenReport();
    int[[]] generalReport() override;
    ~CitizenReport();

private:
CitizenIterator *createIterator();
};

#endif