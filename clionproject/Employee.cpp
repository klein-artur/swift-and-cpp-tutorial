//
// Created by Artur Hellmann on 07.01.17.
//

#include "Employee.h"

Employee::Employee(const string &name, int age, Boss *boss) : Person(name, age), boss(boss) {}

string Employee::get_boss_infos() const {
    return this->boss->getName() + "(" + to_string(this->boss->getAge()) + ") Abteilung: " + this->boss->getDepartment();
}
