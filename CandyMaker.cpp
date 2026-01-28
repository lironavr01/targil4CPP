#include "CandyMaker.h"

CandyMaker::CandyMaker(const char *sugarSupplierName, const char *chocolateSupplierName) : SugarSupplier(sugarSupplierName), ChocolateSupplier(chocolateSupplierName)
{
    currCandy = nullptr;
}

CandyMaker::~CandyMaker()
{
    delete[] currCandy;
}

void CandyMaker::makeCandy(const char *candyName)
{
    if (currCandy != nullptr)
        delete[] currCandy;
    currCandy = new char[std::strlen(candyName) + 1];
    std::strcpy(currCandy, candyName);
    std::cout << "Using sugar from " << this->getSugarName() << " and chocolate from " << this->getChocolateName() << " to create " << currCandy << "!!" << std::endl;
}
