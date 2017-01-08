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
