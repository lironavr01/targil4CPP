#include "ChocolateSupplier.h"

ChocolateSupplier::ChocolateSupplier(const char *supplierName)
{
    name = new char[std::strlen(supplierName) + 1];
    std::strcpy(name, supplierName);
}

ChocolateSupplier::~ChocolateSupplier()
{
    delete[] name;
}

const char *ChocolateSupplier::getChocolateName()
{
    return name;
}

void ChocolateSupplier::setChocolateName(const char *newName)
{
    delete[] name;
    name = new char[std::strlen(newName) + 1];
    std::strcpy(name, newName);
}

void ChocolateSupplier::supplyChocolate()
{
    std::cout << name << " is now supplying chocolate!!" << std::endl;
}