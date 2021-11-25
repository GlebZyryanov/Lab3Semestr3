#pragma once
class Number
{
private: int m_number;

public:  
    Number(int number = 0)
        : m_number(number)
    {
    }

    Number operator++(int);
    Number operator++();
};
    

