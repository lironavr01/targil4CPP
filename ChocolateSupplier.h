#include <iostream>
#include <cstring>

class ChocolateSupplier // TODO
{
private:
    char *name;

public:
    ChocolateSupplier(const char *supplierName);
    ~ChocolateSupplier();
    const char *getChocolateName();
    void setChocolateName(const char *newName);
    void supplyChocolate();
};