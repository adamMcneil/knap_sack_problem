#include <iostream>
#include "bag.h"
#include "item.h"

using namespace std;

int main()
{
    Bag bag(10);
    Item item(5, 4);
    Item item1(2, 1);
    cout << item << endl;
    cout << item1 << endl;
    bag.add(item);
    bag.add(item1);
    bag.add(item);
    bag.add(item1);   
    bag.add(item);
    bag.add(item1);
    cout << bag << endl;
    return 0;
}