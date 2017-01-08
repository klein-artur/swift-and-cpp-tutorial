//
//  Person.swift
//  SwiftCppTut
//
//  Created by Artur Hellmann on 08.01.17.
//  Copyright © 2017 hellmann. All rights reserved.
//

import Cocoa

class Person: NSObject {
    public let cpp_pointer: UnsafeMutableRawPointer
    
    public var name: String {
        get {
            return String(cString: person_getName(self.cpp_pointer))
        }
        set {
            person_setName(self.cpp_pointer, newValue.cCharArray)
        }
    }
    public var age: Int {
        get {
            return Int(person_getAge(self.cpp_pointer))
        }
        set {
            person_setAge(self.cpp_pointer, Int32(newValue))
        }
    }
    
    init(name: String, age: Int) {
        self.cpp_pointer = person_init(name.cCharArray, Int32(age));
    }
    
    init(withPointer pointer: UnsafeMutableRawPointer) {
        self.cpp_pointer = pointer
        super.init()
    }
    
    deinit {
        person_deconstructor(self.cpp_pointer)
    }
    
}
