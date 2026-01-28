#pragma once
#include <iostream>
template <typename T>
class CandyBox
{
private:
    T *arr;
    int capacity;
    int count;

public:
    CandyBox(int size)
    {
        arr = new T[size];
        capacity = size;
        count = 0;
    }
    ~CandyBox()
    {
        delete[] arr;
        arr = nullptr;
    }
    bool addItem(const T &newItem)
    {
        if (capacity <= count)
            return false;
        arr[count++] = newItem;
        return true;
    }
    bool removeItem(int index)
    {
        if (index < 0 || index >= count)
            return false;
        for (int i = index; i < count - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        count--;
        return true;
    }
    void displayItems()
    {
        for (int i = 0; i < count - 1; i++)
        {
            std::cout << i + 1 << ". " << arr[i] << std::endl;
        }
    }
};
