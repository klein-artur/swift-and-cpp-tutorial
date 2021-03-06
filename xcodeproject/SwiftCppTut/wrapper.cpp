//
//  wrapper.cpp
//  SwiftCppTut
//
//  Created by Artur Hellmann on 07.01.17.
//  Copyright © 2017 hellmann. All rights reserved.
//

#include <stdio.h>
#include "Employee.h"

// Boss:
extern "C" void * boss_init(const char *name, const int age, const char *department) {
    Boss *boss = new Boss(string(name), age, string(department));
    return boss;
}

extern "C" void boss_deconstructor(const void *const boss) {
    const Boss *const b = (Boss *) boss;
    delete b;
}

extern "C" void boss_setDepartment(void *const boss, const char *department) {
    Boss *const b = (Boss *) boss;
    b->setDepartment(string(department));
}

extern "C" const char * boss_getDepartment(const void *const boss) {
    const Boss *const b = (Boss *) boss;
    return b->getDepartment().c_str();
}


// Employee:
extern "C" void * employee_init(const char *name, const int age, const void *boss) {
    Employee *emp = new Employee(string(name), age, (Boss *) boss);
    return emp;
}

extern "C" void employee_deconstructor(const void *const employee) {
    const Employee *const e = (Employee *) employee;
    delete e;
}

extern "C" const char * employee_get_boss_info(const void *const employee) {
    const Employee *const e = (Employee *) employee;
    return e->get_boss_infos().c_str();
}

// Person:
extern "C" void * person_init(const char *name, const int age) {
    Person *p = new Person(string(name), age);
    return p;
}

extern "C" void person_deconstructor(const void *const person) {
    const Person *const p = (Person *) person;
    delete p;
}

extern "C" const char * person_getName(const void *const person) {
    const Person *const p = (Person *) person;
    return p->getName().c_str();
}

extern "C" void person_setName(void *const person, const char *const name) {
    Person *const p = (Person *) person;
    p->setName(string(name));
}

extern "C" const int person_getAge(const void *const person) {
    const Person *const p = (Person *) person;
    return p->getAge();
}

extern "C" void person_setAge(void *const person, const int age) {
    Person *const p = (Person *) person;
    p->setAge(age);
}
