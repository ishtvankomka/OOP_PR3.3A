#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;

class Fraction
{
private:
    long int integer;
    unsigned short int fraction;
public:
    Fraction();
    Fraction(int, int);
    Fraction(Fraction&);

    operator string() const;
    friend ostream& operator << (ostream&, const Fraction&);
    friend istream& operator >> (istream&, Fraction&);
    
    long int get_integer() const {return integer;};
    unsigned short int get_fraction() const {return fraction;};
    void set_integer(long int value) { integer = value; };
    void set_fraction(unsigned short int value) { fraction = value; };
};
