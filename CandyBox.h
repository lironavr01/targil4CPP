#include <iostream>

template <typename T>
class CandyBox
{
private:
    T *arr;
    int capacity;
    int count;

public:
    CandyBox(int size);
    ~CandyBox();
};