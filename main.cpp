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

 Student &iostream operator<<(&iostream, int yearLevel, String major){
  Student<<yearLevel<<major<<endl;
}
 Person &iostream operator<<(&iostream, String name, int id){
  Person<<name<<id<<endl;
}
 Instructor &iostream operator<<(&iostream, int yearLevel, String major){
  Instructor<<department<<experienceYears<<endl;
}

Course operator[](Student& students){
  for(int i=0;i<currentStudents){
    return name;
  }
}

 &Course operator+=(const &Student s){
   currentStudents+=s.major;
 }
 friend Course operator==(const &Course c1, const &Course c2){
    return (c1.courseCode=c2.courseCode);
 }
  void Course::roleInfo{
    return;
  }
  


// ==================== Main Function ====================
int main() {
  int a[]={0,1,2}
    Instructor ins(computer_science, 5);
    Student s(2,Informatics);
    Course c1(Cs101, IntroToInformatics,100,70);
    Course c2(Cs102,IntroToProg,120,80);
   cout<<Student<<Person<<Instructor<<endl;
   roleInfo(ins);
   roleInfo(s);
   roleInfo(c1);
   roleInfo(c2);
   c1+=(s);
   display();
   Course(c1==c2);
   display();
    
    return 0;
}
