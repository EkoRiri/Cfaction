//
// Created by EMIL on 24.04.2022.
//

#ifndef EZTEST_CFACTION_H
#define EZTEST_CFACTION_H

class Cfaction {
public:
    Cfaction(){
        numerator = 0;
        denominator = 1;
    }

    Cfaction(int numerator){
        this->numerator = numerator;
        denominator = 1;
    }

    Cfaction(int numerator, int denominator){
        this->numerator = numerator;
        if (denominator != 0) this->denominator = denominator;
        else this->denominator = 1;
    }

    Cfaction(const Cfaction &fraction){
        this->numerator = fraction.numerator;
        this->denominator = fraction.denominator;
    }

    ~Cfaction() {

    }

    operator double() const{
      return (double) numerator/denominator;
    }

    int operator() (int numerator, int denominator) {
    this->numerator = numerator;
    if (denominator != 0) this->denominator = denominator;
    else this->denominator = 1;
    }

    int operator() (int numerator) {
        this->numerator = numerator;
        this->denominator = 1;
    }

    int getNumerator() {
        return numerator;
    }

    int getDenominator() {
        return denominator;
    }

    Cfaction operator ++ () {
        this->numerator += this->denominator;
        return *this;
    }

    Cfaction operator ++ (int) {
        Cfaction temp(*this);
        this->numerator += this->denominator;
        return temp;
    }

    Cfaction operator -- () {
        this->numerator -= this->denominator;
        return *this;
    }

    Cfaction operator -- (int) {
        Cfaction temp(*this);
        this->numerator -= this->denominator;
        return temp;
    }

    Cfaction operator + (const Cfaction &fraction) {
        Cfaction temp;
        if (this->denominator == fraction.denominator) {
            temp.numerator = this->numerator + fraction.numerator;
        } else {
            temp.numerator = this->numerator * fraction.denominator + fraction.numerator * this->denominator;
            temp.denominator = this->denominator * fraction.denominator;
        }
        return temp;
    }

    Cfaction operator - (const Cfaction &fraction) {
        Cfaction temp;
        if (this->denominator == fraction.denominator) {
            temp.numerator = this->numerator - fraction.numerator;
        } else {
            temp.numerator = this->numerator * fraction.denominator - fraction.numerator * this->denominator;
            temp.denominator = this->denominator * fraction.denominator;
        }
        return temp;
    }

    Cfaction operator * (const Cfaction &fraction) {
        Cfaction temp;
        temp.numerator = this->numerator * fraction.numerator;
        temp.denominator = this->denominator * fraction.denominator;
        return temp;
    }

    Cfaction operator / (const Cfaction &fraction) {
        Cfaction temp;
        temp.numerator = this->numerator * fraction.denominator;
        temp.denominator = this->denominator * fraction.numerator;
        return temp;
    }

    Cfaction operator += (const Cfaction &fraction) {
        if (this->denominator == fraction.denominator) {
            this->numerator = this->numerator + fraction.numerator;
        } else {
            this->numerator = this->numerator * fraction.denominator + fraction.numerator * this->denominator;
            this->denominator = this->denominator * fraction.denominator;
        }
        return *this;
    }

    Cfaction operator -= (const Cfaction &fraction) {
        if (this->denominator == fraction.denominator) {
            this->numerator = this->numerator - fraction.numerator;
        } else {
            this->numerator = this->numerator * fraction.denominator - fraction.numerator * this->denominator;
            this->denominator = this->denominator * fraction.denominator;
        }
        return *this;
    }

    Cfaction operator *= (const Cfaction &fraction) {
        this->numerator = this->numerator * fraction.numerator;
        this->denominator = this->denominator * fraction.denominator;
        return *this;
    }

    Cfaction operator /= (const Cfaction &fraction) {
        this->numerator = this->numerator * fraction.denominator;
        this->denominator = this->denominator * fraction.numerator;
        return *this;
    }

    bool operator == (const Cfaction &fraction) {
        return (double(this->numerator) / double(this->denominator) == double(fraction.numerator) / double(fraction.denominator));
    }

    bool operator != (const Cfaction &fraction) {
        return (double(this->numerator) / double(this->denominator) != double(fraction.numerator) / double(fraction.denominator));
    }

    bool operator < (const Cfaction &fraction) {
        return (double(this->numerator) / double(this->denominator) < double(fraction.numerator) / double(fraction.denominator));
    }

    bool operator > (const Cfaction &fraction) {
        return (double(this->numerator) / double(this->denominator) > double(fraction.numerator) / double(fraction.denominator));
    }

    bool operator <= (const Cfaction &fraction) {
        return (double(this->numerator) / double(this->denominator) <= double(fraction.numerator) / double(fraction.denominator));
    }

    bool operator >= (const Cfaction &fraction) {
        return (double(this->numerator) / double(this->denominator) >= double(fraction.numerator) / double(fraction.denominator));
    }

    int reduceFraction() {
        while ((this->numerator % 2 == 0) and (this->denominator % 2 == 0)) {
            this->numerator /= 2;
            this->denominator /= 2;
        }
    }

private:
    int numerator;
    int denominator;
};

#endif //EZTEST_CFACTION_H

