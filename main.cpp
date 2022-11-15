#include <iostream>
#include <cstdlib>
#include "bag.h"
#include "item.h"


using namespace std;

int main()
{
    srand(time(NULL));
    int itemListLength = 50;
    int maxItemValue = 100;
    int maxItemWieght = 10;
    list<Item> items;
    for (int i = 0; i < itemListLength; i++)
    {
        items.push_back(Item(rand() % maxItemValue + 1, rand() % maxItemWieght + 1));
    }
    for (auto const& item: items)
    {
        cout << item << endl;
    }
    Bag bag(itemListLength);
    bag.fillOptimal(items, itemListLength);
    return 0;
}