#pragma once
#include <iostream>
#include <cstring>

class SugarSupplier
{
private:
    char *name;

public:
    SugarSupplier(const char *supllierName);
    ~SugarSupplier();
    const char *getSugarName() const;
    void setSugarName(const char *newName);
    void supplySugar();
};