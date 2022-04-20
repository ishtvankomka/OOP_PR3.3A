#include "Fraction.hpp"
#include "Fraction_Descendant_close.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>
using namespace std;

Fraction& Fraction_Descendant_сlose::operator = (const Fraction& f) {
    set_integer(f.get_integer());
    set_fraction(f.get_fraction());
    return *this;
}

istream& operator >> (istream& in, Fraction_Descendant_сlose& a)
{
    long int i;
    unsigned short int f;
    cout << " Set the integer "; in >> i;
    cout << " Set the fraction "; in >> f;
    a.set_integer(i);
    a.set_fraction(f);
    return in;
}

ostream& operator << (ostream& out, const Fraction_Descendant_сlose& a)
{
    out << string(a);
    return out;
}

Fraction_Descendant_сlose::operator string () const
{
    stringstream a;
    a <<  get_integer() << "." << get_fraction() << endl;
    return a.str();
}

double toNumber(string str)
{
    double number;
    istringstream ( str ) >> number;
    return number;
}

double convertToDouble(Fraction_Descendant_сlose& a)
{
    return toNumber(string(a));
}

Fraction_Descendant_сlose toFraction(double n)
{
    stringstream s;
    s << n;
    string str = s.str();
    string integer_a = strtok(str.data(), ".");
    string fraction_a = strtok(0, "");

    Fraction_Descendant_сlose nn;
    long int integer_b;
    istringstream ( integer_a ) >> integer_b;
    nn.set_integer(integer_b);
    
    unsigned short int fraction_b;
    istringstream ( fraction_a ) >> fraction_b;
    nn.set_fraction(fraction_b);
    
    return nn;
}

Fraction_Descendant_сlose operator + (Fraction_Descendant_сlose& a, Fraction_Descendant_сlose& b)
{
    double sum =  convertToDouble(a) + convertToDouble(b);
    return toFraction(sum);
}

Fraction_Descendant_сlose operator * (Fraction_Descendant_сlose& a, Fraction_Descendant_сlose& b)
{
    double sum =  convertToDouble(a) * convertToDouble(b);
    return toFraction(sum);
}
