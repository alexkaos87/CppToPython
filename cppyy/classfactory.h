#pragma once

#include "myclass.h"

#include <memory>

namespace alessio
{
namespace utility
{
class MyClass;
}

class ClassFactory
{
public:
    static MyClass createMyClass(int myAge, const std::string& myName);

    static std::unique_ptr<utility::MyClass> createMyNestingClass(int myAge, const std::string& myName);
};
}