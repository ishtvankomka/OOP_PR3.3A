#include "Fraction.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>
using namespace std;

Fraction::Fraction() {
    integer = 0;
    fraction = 0;
}

Fraction::Fraction(int f, int s) {
    integer = f;
    fraction = s;
}

Fraction::Fraction(Fraction& a) {
    integer = a.integer;
    fraction = a.fraction;
}

istream& operator >> (istream& in, Fraction& a)
{
    long int i;
    unsigned short int f;
    cout << " Set the integer "; in >> i;
    cout << " Set the fraction "; in >> f;
    a.set_integer(i);
    a.set_fraction(f);
    return in;
}

ostream& operator << (ostream& out, const Fraction& a)
{
    out << string(a);
    return out;
}

Fraction::operator string () const
{
    stringstream a;
    a <<  integer << "." << fraction << endl;
    return a.str();
}

void Read(Fraction& a)
{
    cout << "Set the number:" << endl; cin >> a;
}

void Display(Fraction& a)
{
    cout << a;
}
