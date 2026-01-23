#include "CandyMaker.h"

CandyMaker::CandyMaker(const char *sugarSupplierName, const char *chocolateSupplierName)
{
    sName = new char[std::strlen(sugarSupplierName) + 1];
    cName = new char[std::strlen(chocolateSupplierName) + 1];
    std::strcpy(sName, sugarSupplierName);
    std::strcpy(cName, chocolateSupplierName);
    currCandy = nullptr;
}

CandyMaker::~CandyMaker()
{
    delete[] sName;
    delete[] cName;
    delete[] currCandy;
}

void CandyMaker::makeCandy(const char *candyName)
{
    currCandy = new char[std::strlen(candyName) + 1];
    std::strcpy(currCandy, candyName);
    std::cout << "Using sugar from " << *sName << " and chocolate from " << *cName << " to create " << *currCandy << "!!" << std::endl;
}
