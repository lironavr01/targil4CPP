#include <iostream>
#include <cstring>
#include "ChocolateSupplier.h"
#include "SugarSupplier.h"

class CandyMaker : public ChocolateSupplier, public SugarSupplier
{
private:
    char *sName;
    char *cName;
    char *currCandy;

public:
    CandyMaker(const char *sugarSupplierName, const char *chocolateSupplierName);
    ~CandyMaker();
    void makeCandy(const char *candyName);
    friend std::ostream &operator<<(std::ostream &os, const SugarSupplier &supplier);
};