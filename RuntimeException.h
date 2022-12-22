//
// Created by StudentLoaner on 9/21/2022.
//

#ifndef GAMEENTRY_RUNTIMEEXCEPTION_H
#define GAMEENTRY_RUNTIMEEXCEPTION_H
using namespace std;
#include <iostream>

class RuntimeException {
private:
    string errorMsg;
public:
    RuntimeException(const string& err) { errorMsg = err; }
    string getMessage() const { return errorMsg; }

};


#endif //GAMEENTRY_RUNTIMEEXCEPTION_H
