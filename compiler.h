#ifndef COMPILER_H
#define COMPILER_H

#include "PyCppBridge.h"

class DeepClientCppWrapper;

extern DeepClientCppWrapper* deepClient;

class Compiler {
public:
    static std::string compileAndExecute(const std::string& code, DeepClientCppWrapper* deepClient);
};

#endif // COMPILER_H