#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here
#ifndef ASSIGMENT01_INSTRUCTOR_H
#define ASSIGMENT01_INSTRUCTOR_H
class Instructor {
private:
    string department;
    int experienceYears;
public:
    Instructor(string department, int experienceYears);
    Instructor();
    void display();
    string getDepartment();
    int getExperinceYears();
};
#endif











#endif
