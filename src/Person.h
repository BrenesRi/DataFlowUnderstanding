//
// Created by ribre on 23/06/2022.
//

#ifndef DATAFLOWUNDERSTANDING_PERSON_H
#define DATAFLOWUNDERSTANDING_PERSON_H
#include <iostream>
#include <sstream>
#include <ostream>
using namespace std;

class Person {
private:
    string name;
    string id;
    double happiness;
public:
    Person();

    Person(string name,string id, double happiness);

    virtual ~Person();

    const string &getName() const;

    void setName(const string &name);

    const string &getId() const;

    void setId(const string &id);

    double getHappiness() const;

    void setHappiness(double happiness);

    friend ostream &operator<<(ostream &os, const Person &person);

    virtual string toString() const;
};


#endif //DATAFLOWUNDERSTANDING_PERSON_H
