#ifndef ITEM_H 
#define ITEM_H 

#include <iostream>

using namespace std;

class Item
{
private:
    int m_value;
    int m_weight;

public:
    Item(int v, int w);
    int getValue() const { return this->m_value; }
    int getWeight() const { return this->m_weight; }

    friend ostream& operator<<(ostream& os, const Item& item);
};

#endif //ITEM_H
