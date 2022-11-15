#ifndef BAG_H
#define BAG_H

#include <iostream>
#include <list>
#include "item.h"

using namespace std;

class Bag
{
private:
    int m_size;
    int m_room;
    int m_value;
    list<Item> m_items;

public:
    Bag(int s);
    int getSize() const { return this->m_size; }
    int getRoom() const { return this->m_room; }
    int getValue() const { return this->m_value; }
    list<Item> const getItems() const { return this->m_items; }

    bool isEmpty() const { return !(this->m_room); }
    bool isFull() const { return !(this->m_size - this->m_room); }
    
    void add(Item item);
    void fillGreedy(list<Item> items);
    void fillOptimal(list<Item> items, int const length);
    friend ostream &operator<<(ostream &os, const Bag &bag);
};

#endif //BAG_H
