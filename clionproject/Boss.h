//
// Created by Artur Hellmann on 07.01.17.
//

#ifndef SWIFTCPPTUT_TEACHER_H
#define SWIFTCPPTUT_TEACHER_H


#include "Person.h"

class Boss : public Person {
private:
    std::string department;

public:
    Boss(const string &name, int age, const string &department);

    const string &getDepartment() const;

    void setDepartment(const string &department);
};


#endif //SWIFTCPPTUT_TEACHER_H
