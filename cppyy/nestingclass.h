#pragma once

#include <string>

namespace alessio
{
namespace utility
{
class MyClass
{
public:
    MyClass() = default;
    ~MyClass();
    MyClass(int myAge, const std::string& myName);

    std::string toString() const;

private:
    int m_myAge{0};
    std::string m_myName{"Unknown"};
};
}
}