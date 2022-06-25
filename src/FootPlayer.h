//
// Created by ribre on 23/06/2022.
//

#ifndef DATAFLOWUNDERSTANDING_FOOTPLAYER_H
#define DATAFLOWUNDERSTANDING_FOOTPLAYER_H

#include <ostream>
#include "Person.h"

class FootPlayer: public Person{
private:
    double salary;
    double transferFee;
public:
    FootPlayer();

    FootPlayer(const string &name, const string &id, double happiness, double salary, double transferFee);

    ~FootPlayer() override;

    double getSalary() const;

    void setSalary(double salary);

    double getTransferFee() const;

    void setTransferFee(double transferFee);

    friend ostream &operator<<(ostream &os, const FootPlayer &player);

    string toString() const override;
};


#endif //DATAFLOWUNDERSTANDING_FOOTPLAYER_H
