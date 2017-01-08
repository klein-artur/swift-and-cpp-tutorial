//
//  Boss.swift
//  SwiftCppTut
//
//  Created by Artur Hellmann on 08.01.17.
//  Copyright © 2017 hellmann. All rights reserved.
//

import Cocoa

class Boss: Person {
    
    public var department: String {
        get {
            return String(cString: boss_getDepartment(self.cpp_pointer))
        }
        set {
            boss_setDepartment(self.cpp_pointer, department.cCharArray)
        }
    }

    init(name: String, age: Int, department: String) {
        super.init(withPointer: boss_init(name.cCharArray, Int32(age), department.cCharArray))
    }
}
