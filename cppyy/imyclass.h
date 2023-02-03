#pragma once

class IMyClass
{
public:
    virtual ~IMyClass() = default;

    virtual bool isMagic() = 0;
};