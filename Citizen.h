

#ifndef CITIZEN_H
#define CITIZEN_H

#include "string"
#include "vector"
#include "CitizenMood.h"


using namespace std;

class Citizen {
private:
    CitizenMood* mood;

    string name;
    int age;
    bool hasCriminalRecord;

    string jobTitle;
    vector<string> crimes;
public:
    // todo constructor

    void setMood(string mood);
    string getMood();
    int calculateHealth();
    void makeComplaint(string complaint);
    void punish(string crime);

};



#endif //CITIZEN_H
