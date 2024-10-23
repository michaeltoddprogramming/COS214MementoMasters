#ifndef REPORT_H
#define REPORT_H

#pragma once

class Report
{
public:
    Report();
    virtual int[[]] generalReport()=0;
    
    ~Report();

private:

};

#endif