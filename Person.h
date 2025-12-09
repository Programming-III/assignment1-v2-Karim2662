#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here


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
void roleInfo();
};
#endif










#endif
