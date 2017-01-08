//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

#include <stdio.h>

// Boss:
void * boss_init(const char *name, const int age, const char *department);
void boss_deconstructor(const void *const boss);
void boss_setDepartment(void *const boss, const char *department);
const char * boss_getDepartment(const void *const boss);

// Employee:
void * employee_init(const char *name, const int age, const void *boss);
void employee_deconstructor(const void *const employee);
const char * employee_get_boss_info(const void *const employee);

// Person:
void * person_init(const char *name, const int age);
void person_deconstructor(const void *const person);
const char * person_getName(const void *const person);
void person_setName(void *const person, const char *const name);
const int person_getAge(const void *const person);
void person_setAge(void *const person, const int age);
