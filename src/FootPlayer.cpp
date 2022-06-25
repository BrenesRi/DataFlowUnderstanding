//
// Created by ribre on 23/06/2022.
//

#include "FootPlayer.h"

FootPlayer::FootPlayer(const string &name, const string &id, double happiness, double salary, double transferFee) :
Person(name, id, happiness), salary(salary),transferFee(transferFee) {}

FootPlayer::~FootPlayer() = default;

double FootPlayer::getSalary() const {
    return salary;
}

void FootPlayer::setSalary(double salary) {
    FootPlayer::salary = salary;
}

double FootPlayer::getTransferFee() const {
    return transferFee;
}

void FootPlayer::setTransferFee(double transferFee) {
    FootPlayer::transferFee = transferFee;
}

ostream &operator<<(ostream &os, const FootPlayer &player) {
    os << static_cast<const Person &>(player) << " Salario: " << player.salary << " PrecioTransferencia: " << player.transferFee;
    return os;
}

string FootPlayer::toString() const {
    stringstream ss;
    ss << (*this);
    return ss.str();
}

FootPlayer::FootPlayer() = default;
