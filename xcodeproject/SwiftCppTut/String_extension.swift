//
//  String_extension.swift
//  SwiftCppTut
//
//  Created by Artur Hellmann on 08.01.17.
//  Copyright © 2017 hellmann. All rights reserved.
//

import Foundation

public extension String {
    var cCharArray: UnsafeMutablePointer<Int8> {
        return UnsafeMutablePointer<Int8>(mutating: (self as NSString).utf8String!)
    }
}
