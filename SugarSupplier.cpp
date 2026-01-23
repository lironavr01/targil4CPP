#include "SugarSupplier.h"
#include <cstring>

SugarSupplier::SugarSupplier(const char *SupplierName)
{
    name = new char[std::strlen(SupplierName) + 1];
    std::strcpy(name, SupplierName);
}

SugarSupplier::~SugarSupplier()
{
    delete[] name;
}

const char *SugarSupplier::getSugarName() const
{
    return name;
}

void SugarSupplier::setSugarName(const char *newName)
{
    delete[] name;
    name = new char[std::strlen(newName) + 1];
    std::strcpy(name, newName);
}

void SugarSupplier::supplySugar()
{
    std::cout << name << " is now supllying sugar!!" << std::endl;
}
