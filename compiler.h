#ifndef COMPILER_H
#define COMPILER_H

#include <string>
#include "httplib.h"
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>

class Compiler {
public:
    static std::string compileAndExecute(const std::string& code);
};

#endif // COMPILER_H