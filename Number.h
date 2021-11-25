#pragma once
class Number
{
private: int m_number;
private: int a_number;
public:  
    Number(int number = 0)
        : m_number(number), a_number(number)
    {
    }
    Number operator+(Number pt);//прототип перегрузки бинарного оператора +
    Number operator++(int);//прототипы перегрузки унарного оператора постфикса ++ и префикса ++
    Number operator++();
};
    

