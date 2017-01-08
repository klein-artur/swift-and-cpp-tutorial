//
//  Boss.swift
//  SwiftCppTut
//
//  Created by Artur Hellmann on 08.01.17.
//  Copyright © 2017 hellmann. All rights reserved.
//

import Cocoa

class Boss: NSObject {
    public var cpp_boss_pointer: UnsafeMutableRawPointer

    init(name: String, age: Int, department: String) {
        self.cpp_boss_pointer = boss_init(name.cCharArray, Int32(age), department.cCharArray)
        super.init()
    }
    
    func getDepartment() -> String {
        return String(cString: boss_getDepartment(self.cpp_boss_pointer))
    }
    func setDepartment(_ department: String) {
        boss_setDepartment(self.cpp_boss_pointer, department.cCharArray)
    }
    
    deinit {
        boss_deconstructor(self.cpp_boss_pointer)
    }
}
