#pragma once
#include <iostream>
#include <cstring>
#include "ChocolateSupplier.h"
#include "SugarSupplier.h"

class CandyMaker : public ChocolateSupplier, public SugarSupplier
{
private:
    char *currCandy;

public:
    CandyMaker(const char *sugarSupplierName, const char *chocolateSupplierName);
    ~CandyMaker();
    void makeCandy(const char *candyName);
};