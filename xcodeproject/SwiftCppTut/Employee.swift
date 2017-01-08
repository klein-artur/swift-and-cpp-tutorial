//
//  Employee.swift
//  SwiftCppTut
//
//  Created by Artur Hellmann on 08.01.17.
//  Copyright © 2017 hellmann. All rights reserved.
//

import Cocoa

class Employee: Person {
    
    init(name: String, age: Int, boss: Boss) {
        super.init(withPointer: employee_init(name.cCharArray, Int32(age), boss.cpp_pointer))
    }
    
    func getBossInfo() -> String {
        return String(cString: employee_get_boss_info(self.cpp_pointer))
    }
}
