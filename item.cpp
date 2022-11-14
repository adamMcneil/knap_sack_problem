#include "item.h"

Item::Item (int v, int w)
{
    m_value = v;
    m_weight = w;
}

ostream& operator<<(ostream& os, const Item& item)
{
    os << "item (" << item.m_value << " " << item.m_weight << ")";
    return os;
}
