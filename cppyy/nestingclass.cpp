#include "nestingclass.h"

#include <iostream>
#include <sstream>

namespace alessio
{
namespace utility
{
MyClass::~MyClass() 
{
    std::cout << "This is the d-tor\n";
}

MyClass::MyClass(const int myAge, const std::string& myName) : m_myAge(myAge), m_myName(myName)
{
    std::cout << "This is the c-tor\n";
}

std::string MyClass::toString() const 
{
    std::stringstream buffer;
    buffer << "Age = " << m_myAge << " Name = " << m_myName;
    return buffer.str();
}
}
}