#include "bag.h"

Bag::Bag(int s)
{
    this->m_size = s;
    this->m_room = s;
    this->m_value = 0;
    this->m_items = list<Item>();
}

void Bag::add(Item item)
{
    if (item.getWeight() > this->m_room)
    {
        cout << "The item with size (" << item.getWeight() << ") will not fit in a bag with room (" << this->m_room << ")" << endl;
        return;
    }
    this->m_room -= item.getWeight();
    this->m_value += item.getValue();
    this->m_items.push_back(item);
}

ostream &operator<<(ostream &os, const Bag& bag)
{
    os << "size: " << bag.getSize() << endl;
    os << "room: " << bag.getRoom() << endl;
    os << "value: " << bag.getValue() << endl;
    for (auto const& i: bag.getItems())
    {
        os << i << endl;
    }
    return os;
}

void Bag::fillGreedy(list<Item> items)
{

}

void Bag::fillOptimal(list<Item> items)
{

}