#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here
#ifndef ASSIGMENT01_PERSON_H
#define ASSIGMENT01_PERSON_H
#include <string>
using namespace std;
class Person{
protected:
    string name;
    int id;
public:
    Person(string name,int id);
    Person();
    void display();
    ~Person();
    int getId();
    string getName();
};
#endif 











#endif
