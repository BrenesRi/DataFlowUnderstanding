//
// Created by ribre on 23/06/2022.
//

#ifndef DATAFLOWUNDERSTANDING_FOOTMANAGER_H
#define DATAFLOWUNDERSTANDING_FOOTMANAGER_H

#include <ostream>
#include "Person.h"

class FootManager: public  Person{
private:
    string team;
    double salary;
public:
    FootManager();

    FootManager(const string &name, const string &id, double happiness, const string &team, double salary);

    ~FootManager() override;

    const string &getTeam() const;

    void setTeam(const string &team);

    double getSalary() const;

    void setSalary(double salary);

    friend ostream &operator<<(ostream &os, const FootManager &manager);

    string toString() const override;
};


#endif //DATAFLOWUNDERSTANDING_FOOTMANAGER_H
