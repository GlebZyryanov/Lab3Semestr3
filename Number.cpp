#include "Number.h"

Number Number::operator++(int)
{
    ++m_number;
    return Number(m_number - 1);
}
Number Number::operator++()
{
    ++m_number;
    return Number(m_number);
}