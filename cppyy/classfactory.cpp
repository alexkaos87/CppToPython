#include "classfactory.h"

#include "nestingclass.h"

namespace alessio
{
MyClass ClassFactory::createMyClass(const int myAge, const std::string& myName) 
{
    return {myAge, myName};
}

std::unique_ptr<utility::MyClass> ClassFactory::createMyNestingClass(int myAge, const std::string& myName) 
{
    return std::make_unique<utility::MyClass>(myAge, myName);
}
}