#include <iostream>
#include <stddef.h>
#include <stdio.h>
#include "Fraction_Descendant_open.hpp"
//#include "Fraction_Descendant_close.hpp"

using namespace std;

int main() {
    Fraction_Descendant_open n1;
    Read(n1);
    cout << "The number is ";
    Display(n1);

    Fraction_Descendant_open n2;
    Read(n2);
    cout << "The number is ";
    Display(n2);

    Fraction_Descendant_open nsum;
    nsum = n1 + n2;
    cout << " Sum: ";
    Display(nsum);

    Fraction_Descendant_open nmultiplication;
    nmultiplication = n1 * n2;
    cout << " Multiplication: ";
    Display(nmultiplication);
    
//    Fraction_Descendant_сlose n1;
//    cout << "Set the number:" << endl;
//    cin >> n1;
//    cout << "The number is ";
//    cout << n1;
//
//    Fraction_Descendant_сlose n2;
//    cout << "Set the number:" << endl;
//    cin >> n2;
//    cout << "The number is ";
//    cout << n2;
//
//    Fraction_Descendant_сlose nsum;
//    nsum = n1 + n2;
//    cout << " Sum: ";
//    cout << nsum;
//
//    Fraction_Descendant_сlose nmultiplication;
//    nmultiplication = n1 * n2;
//    cout << " Multiplication: ";
//    cout << nmultiplication;

    return 0;
}

