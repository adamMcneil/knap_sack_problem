#include <iostream>
#include "bag.h"
#include "item.h"


using namespace std;

int main()
{
    Bag bag(10);
    Item item(5, 4);
    Item item1(2, 1);
    list<Item> items;
    items.push_front(item);
    items.push_front(item1);
    bag.fillOptimal(items, 2);
    return 0;
}