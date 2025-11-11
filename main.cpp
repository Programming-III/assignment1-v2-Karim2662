#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person::Person() {

}


Person::Person(string name,int id){
    this->name = name;
    this->id = id;
}
void Person::display() {
    cout<<"currentlyEnrolled:"<<name<<"(ID:"<<id<<")"<<endl;
}
int Person::getId() {
    return id;
}
string Person::getName() {
    return name;
}
Person::~Person(){

};







// ==================== Student Class Implementation ====================
Student::Student() {

}
Student::Student(int year, string major){
    this->major = major;
    this->yearLevel=year;
}

void Student::display() {
    cout<<"year:"<<yearLevel<<endl;
    cout<<"major:"<<major<<endl;
}
int Student::getYearLevel() {
    return yearLevel;
}
int Student::getMajor() {
    return major;
}
Student::~Student() {

}





// ==================== Instructor Class Implementation ====================
Instructor::Instructor() {

}
Instructor::Instructor(string department, int experienceYears) {
    this->department = department;
    this->experienceYears = experienceYears;
}
void Instructor::display() {
    cout<<"department:"<<department<<endl;
    cout<<"experience:"<<experienceYears<<endl;
}
Instructor::~Instructor() {

}





// ==================== Course Class Implementation ====================
course::course() {
    Student* students;
}
course::course(string courseCode, string courseName, int maxStudents, int currentStudents,Student&students){
    this->courseName = courseName;
    this->maxStudents = maxStudents;
    this->currentStudents = currentStudents;
    this->students = &students;
    this->courseCode = courseCode;
}
void course::displayCourseInfo() {
    cout<<"course:"<<courseName<<endl;
    cout<<"maxStudents:"<<maxStudents<<endl;
    cout<<"currentStudents:"<<currentStudents<<endl;
}
string course::getCourseCode() {
    return courseCode;
}
void course::addStudent(const Student &s) {

}
int course::getMaxStudents() {
    return maxStudents;
}
int course::getCurrentStudents() {
    return currentStudents;
}
string course::getcourseName() {
    return courseName;
}
course::~course(){
    delete [] students;
}








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
