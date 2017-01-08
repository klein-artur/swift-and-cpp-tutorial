//
// Created by Artur Hellmann on 07.01.17.
//

#include "Boss.h"

Boss::Boss(const string &name, int age, const string &department) : Person(name, age), department(department) {}

const string &Boss::getDepartment() const {
    return department;
}

void Boss::setDepartment(const string &department) {
    Boss::department = department;
}
