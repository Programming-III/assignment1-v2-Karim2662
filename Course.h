#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
#ifndef ASSIGMENT01_COURSE_H
#define ASSIGMENT01_COURSE_H
#include "Student.h"

class course {
    private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
public:
    course(string courseCode, string courseName,int maxStudents, int currentStudents, Student& students);
    course();
    void addStudent(const Student& s);
    void displayCourseInfo();
    string getCourseCode();
    string getcourseName();

    ~course();

    int getMaxStudents();
    int getCurrentStudents();
};
#endif












#endif
