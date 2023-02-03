#include "myclass.h"

#include <sstream>

MyClass::MyClass(const int myAge, const std::string& myName) : m_myAge(myAge), m_myName(myName)
{}

std::string MyClass::toString() const 
{
    std::stringstream buffer;
    buffer << "Age = " << m_myAge << " Name = " << m_myName;
    return buffer.str();
}

 bool MyClass::isMagic()
 {
    return m_myAge > 0 && !m_myName.empty();
 }