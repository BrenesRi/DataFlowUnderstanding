//
// Created by ribre on 23/06/2022.
//

#include "Person.h"

#include <utility>

Person::Person() = default;

Person::Person(string name, string id, double happiness): name(std::move(name)),id(std::move(id)),happiness(happiness) {
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

const string &Person::getId() const {
    return id;
}

void Person::setId(const string &id) {
    Person::id = id;
}

double Person::getHappiness() const {
    return happiness;
}

void Person::setHappiness(double happiness) {
    Person::happiness = happiness;
}

ostream &operator<<(ostream &os, const Person &person) {
    os << "Nombre: " << person.name << " ID: " << person.id << " Felicidad: " << person.happiness;
    return os;
}

string Person::toString() const {
    stringstream ss;
    ss << (*this);
    return ss.str();
}

Person::~Person() = default;
