#include <iostream>
#include "Cfaction.h"

int main() {

    Cfaction a;
    std::cout << "a:\n" << "Numerator = " << a.getNumerator() << "\n" << "Denominator = " << a.getDenominator() << "\n\n";

    Cfaction b(5);
    std::cout << "b:\n" << "Numerator = " << b.getNumerator() << "\n" << "Denominator = " << b.getDenominator() << "\n\n";

    Cfaction c(1,2);
    std::cout << "c:\n" << "Numerator = " << c.getNumerator() << "\n" << "Denominator = " << c.getDenominator() << "\n\n";

    Cfaction d(0,0);
    std::cout << "d:\n" << "Numerator = " << d.getNumerator() << "\n" << "Denominator = " << d.getDenominator() << "\n\n";

    d(5,0);
    std::cout << "d:\n" << "Numerator = " << d.getNumerator() << "\n" << "Denominator = " << d.getDenominator() << "\n\n";

    d(5,4);
    std::cout << "d:\n" << "Numerator = " << d.getNumerator() << "\n" << "Denominator = " << d.getDenominator() << "\n\n";

    d(5);
    std::cout << "d:\n" << "Numerator = " << d.getNumerator() << "\n" << "Denominator = " << d.getDenominator() << "\n\n";



    Cfaction plus=b+c;
    std::cout << "plus:\n" << "Numerator = " << plus.getNumerator() << "\n" << "Denominator = " << plus.getDenominator() << "\n\n";

    Cfaction minus=c-b;
    std::cout << "minus:\n" << "Numerator = " << minus.getNumerator() << "\n" << "Denominator = " << minus.getDenominator() << "\n\n";

    Cfaction multi=b*c;
    std::cout << "multi:\n" << "Numerator = " << multi.getNumerator() << "\n" << "Denominator = " << multi.getDenominator() << "\n\n";

    Cfaction division=b/c;
    std::cout << "division:\n" << "Numerator = " << division.getNumerator() << "\n" << "Denominator = " << division.getDenominator() << "\n\n";



    Cfaction e(3,2);
    plus+=e;
    std::cout << "plus:\n" << "Numerator = " << plus.getNumerator() << "\n" << "Denominator = " << plus.getDenominator() << "\n\n";

    minus-=e;
    std::cout << "minus:\n" << "Numerator = " << minus.getNumerator() << "\n" << "Denominator = " << minus.getDenominator() << "\n\n";

    multi*=e;
    std::cout << "multi:\n" << "Numerator = " << multi.getNumerator() << "\n" << "Denominator = " << multi.getDenominator() << "\n\n";

    division/=e;
    std::cout << "division:\n" << "Numerator = " << division.getNumerator() << "\n" << "Denominator = " << division.getDenominator() << "\n\n";



    Cfaction value(2,3);
    Cfaction test(1,1);

    test+=++value;
    std::cout << "test:\n" << "Numerator = " << test.getNumerator() << "\n" << "Denominator = " << test.getDenominator() << "\n\n";
    std::cout << "value:\n" << "Numerator = " << value.getNumerator() << "\n" << "Denominator = " << value.getDenominator() << "\n\n";
    value(2,3);
    test(1,1);

    test+=value++;
    std::cout << "test:\n" << "Numerator = " << test.getNumerator() << "\n" << "Denominator = " << test.getDenominator() << "\n\n";
    std::cout << "value:\n" << "Numerator = " << value.getNumerator() << "\n" << "Denominator = " << value.getDenominator() << "\n\n";
    value(2,3);
    test(1,1);

    test+=--value;
    std::cout << "test:\n" << "Numerator = " << test.getNumerator() << "\n" << "Denominator = " << test.getDenominator() << "\n\n";
    std::cout << "value:\n" << "Numerator = " << value.getNumerator() << "\n" << "Denominator = " << value.getDenominator() << "\n\n";
    value(2,3);
    test(1,1);

    test+=value--;
    std::cout << "test:\n" << "Numerator = " << test.getNumerator() << "\n" << "Denominator = " << test.getDenominator() << "\n\n";
    std::cout << "value:\n" << "Numerator = " << value.getNumerator() << "\n" << "Denominator = " << value.getDenominator() << "\n\n";
    value(2,3);
    test(1,1);



    double frac = double(value);
    std::cout << "Fraction value = " << frac << "\n\n";



    value(32,48);
    value.reduceFraction();
    std::cout << "value:\n" << "Numerator = " << value.getNumerator() << "\n" << "Denominator = " << value.getDenominator() << "\n\n";



    bool check;
    check = value==test;
    std::cout << "0 - false \n1 - true " << "\n";
    std::cout << "Value == test? " << check << "\n";

    check = value!=test;
    std::cout << "Value != test? " << check << "\n";

    check = value<test;
    std::cout << "Value < test? " << check << "\n";

    check = value>test;
    std::cout << "Value > test? " << check << "\n";

    value(1,1);
    check = value<=test;
    std::cout << "Value <= test? " << check << "\n";

    check = value>=test;
    std::cout << "Value >= test? " << check << "\n";

    return 0;
}
