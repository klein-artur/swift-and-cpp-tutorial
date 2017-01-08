//
// Created by Artur Hellmann on 07.01.17.
//

#include "Person.h"


Person::Person(const string &name, int age) : name(name), age(age) {}

Person::Person() : name("John Doe"), age(29) {}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

