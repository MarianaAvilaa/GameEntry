//
// Created by StudentLoaner on 9/21/2022.
//

#ifndef GAMEENTRY_INDEXOUTOFBOUNDS_H
#define GAMEENTRY_INDEXOUTOFBOUNDS_H

#endif //GAMEENTRY_INDEXOUTOFBOUNDS_H
using namespace std;
#include <iostream>
#include "RuntimeException.h"

class IndexOutOfBounds : public RuntimeException {
public:
    IndexOutOfBounds(const string& err = "Index out of bounds!")
            : RuntimeException(err) {}
};