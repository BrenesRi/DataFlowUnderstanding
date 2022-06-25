//
// Created by ribre on 23/06/2022.
//

#include "FootManager.h"

FootManager::FootManager(const string &name, const string &id, double happiness, const string &team, double salary) : Person(name, id,
                                                                                                              happiness),
                                                                                                       team(team), salary(salary) {}
FootManager::FootManager() {}

FootManager::~FootManager() {

}

const string &FootManager::getTeam() const {
    return team;
}

void FootManager::setTeam(const string &team) {
    FootManager::team = team;
}

double FootManager::getSalary() const {
    return salary;
}

void FootManager::setSalary(double salary) {
    FootManager::salary = salary;
}

ostream &operator<<(ostream &os, const FootManager &manager) {
    os << static_cast<const Person &>(manager) << " Equipo: " << manager.team << " Salario: " << manager.salary;
    return os;
}

string FootManager::toString() const {
    stringstream ss;
    ss << (*this);
    return ss.str();
}

