//
// Created by Artur Hellmann on 07.01.17.
//

#ifndef SWIFTCPPTUT_PERSON_H
#define SWIFTCPPTUT_PERSON_H


#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(const string &name, int age);

    Person();

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);
};


#endif //SWIFTCPPTUT_PERSON_H
