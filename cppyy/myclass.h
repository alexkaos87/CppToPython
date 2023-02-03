#pragma once

#include "imyclass.h"
#include <string>

class MyClass : public IMyClass
{
public:
    MyClass() = default;
    virtual ~MyClass() override = default;
    MyClass(int myAge, const std::string& myName);

    std::string toString() const;

    virtual bool isMagic() override;

private:
    int m_myAge{-1};
    std::string m_myName;
};