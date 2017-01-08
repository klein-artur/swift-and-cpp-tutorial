//
//  Employee.swift
//  SwiftCppTut
//
//  Created by Artur Hellmann on 08.01.17.
//  Copyright © 2017 hellmann. All rights reserved.
//

import Cocoa

class Employee: NSObject {
    private var cpp_employee_pointer: UnsafeMutableRawPointer
    
    init(name: String, age: Int, boss: Boss) {
        self.cpp_employee_pointer = employee_init(name.cCharArray, Int32(age), boss.cpp_boss_pointer)
        super.init()
    }
    
    func getBossInfo() -> String {
        return String(cString: employee_get_boss_info(self.cpp_employee_pointer))
    }
    
    deinit {
        employee_deconstructor(self.cpp_employee_pointer)
    }
}
