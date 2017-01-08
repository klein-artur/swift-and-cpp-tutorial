//
// Created by Artur Hellmann on 07.01.17.
//

#ifndef SWIFTCPPTUT_STUDENT_H
#define SWIFTCPPTUT_STUDENT_H


#include "Person.h"
#include "Boss.h"

using namespace std;

class Employee: public Person {
private:
    Boss *boss;

public:
    Employee(const string &name, int age, Boss *boss);

    string get_boss_infos() const;
};


#endif //SWIFTCPPTUT_STUDENT_H
