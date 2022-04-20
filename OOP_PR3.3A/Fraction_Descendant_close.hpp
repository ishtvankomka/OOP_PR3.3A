#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include"Fraction.hpp"
using namespace std;

class Fraction_Descendant_сlose : private Fraction
{
public:
    Fraction& operator = (const Fraction&);
    operator string() const;
    friend ostream& operator << (ostream&, const Fraction_Descendant_сlose&);
    friend istream& operator >> (istream&, Fraction_Descendant_сlose&);
        
    friend Fraction_Descendant_сlose operator + (Fraction_Descendant_сlose&, Fraction_Descendant_сlose&);
    friend Fraction_Descendant_сlose operator * (Fraction_Descendant_сlose&, Fraction_Descendant_сlose&);

    friend Fraction_Descendant_сlose toFraction(double);
    friend double convertToDouble(Fraction_Descendant_сlose&);
    friend double toNumber(string);
};
