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

void Bag::fillOptimal(list<Item> items, int const length)
{
    int table[this->m_room + 1][length + 1];
    for (int i = 0; i < this->m_room + 1; i++)
    {
        for (int j = 0; j < length + 1; j++)
        {
            table[i][j] = 0;

        }
    }
        int itemCounter = 1;
    int largestValue;
    for (auto const &item : items)
    {
        for (int i = 1; i <= m_room; i++)
        {
            if (item.getWeight() > i)
            {
                largestValue = 0;
            }
            else
            {
                largestValue = item.getValue() + table[itemCounter - 1][i - item.getValue()];
            }

            if (largestValue < table[itemCounter - 1][i])
            {
                largestValue = table[itemCounter - 1][i];
            }
            if (largestValue < table[itemCounter][i - 1])
            {
                largestValue = table[itemCounter][i - 1];
            }
            table[itemCounter][i] = largestValue;
        }
        itemCounter++;
    }

    for (int i = 0; i < this->m_room + 1; i++)
    {
        for (int j = 0; j < length + 1; j++)
        {
            cout << table[i][j];
        }
        cout << endl;
    }
}