#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here
#ifndef ASSIGMENT01_STUDENT_H
#define ASSIGMENT01_STUDENT_H
class Student {
private:
    int yearLevel;
    string major;
public:
    Student(int yearLevel, string major);
    Student();
    void display();
    ~Student();
    int getYearLevel();
    string getMajor();
};
#endif












#endif
