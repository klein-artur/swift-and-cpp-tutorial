//
//  main.swift
//  SwiftCppTut
//
//  Created by Artur Hellmann on 07.01.17.
//  Copyright © 2017 hellmann. All rights reserved.
//

import Foundation

/*
print ("Positions of Obama:")

let boss = Boss(name: "Barack Obama", age: 55, department: "US-Government")

print(boss.getDepartment())

boss.setDepartment("Not US-Government")

print(boss.getDepartment())
*/

print ("My Boss is:")

let boss = Boss(name: "Barack Obama", age: 55, department: "US-Government")

let employee = Employee(name: "John Doe", age: 29, boss: boss)

print (employee.getBossInfo())
