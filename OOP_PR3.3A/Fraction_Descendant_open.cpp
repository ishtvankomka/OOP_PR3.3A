#include "Fraction.hpp"
#include "Fraction_Descendant_open.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>
using namespace std;

Fraction& Fraction_Descendant_open::operator = (const Fraction& f) {
    set_integer(f.get_integer());
    set_fraction(f.get_fraction());
    return *this;
}

void Read(Fraction_Descendant_open& a)
{
    cout << "Set the number:" << endl; cin >> a;
}

void Display(Fraction_Descendant_open& a)
{
    cout << a;
}

double toNumber(string str)
{
    double number;
    istringstream ( str ) >> number;
    return number;
}

double convertToDouble(Fraction& a)
{
    return toNumber(string(a));
}

Fraction toFraction(double n)
{
    stringstream s;
    s << n;
    string str = s.str();
    string integer_a = strtok(str.data(), ".");
    string fraction_a = strtok(0, "");

    Fraction nn;
    long int integer_b;
    istringstream ( integer_a ) >> integer_b;
    nn.set_integer(integer_b);
    
    unsigned short int fraction_b;
    istringstream ( fraction_a ) >> fraction_b;
    nn.set_fraction(fraction_b);
    
    return nn;
}

Fraction operator + (Fraction& a, Fraction& b)
{
    double sum =  convertToDouble(a) + convertToDouble(b);
    return toFraction(sum);
}

Fraction operator * (Fraction& a, Fraction& b)
{
    double sum =  convertToDouble(a) * convertToDouble(b);
    return toFraction(sum);
}

