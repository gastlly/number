#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
using namespace std;

class Number{
public:
    Number ( double a ):x( a ),y(0.0)
    {};
    Number ( double a, double b ):x( a ),y( b )
    {};
    virtual void print();
    virtual Number add(const Number& other);
    virtual Number mul(const Number& other);
protected:
    double x;
    double y;
};

class RealNumber: public Number{
public:
    RealNumber ( double a ):Number( a )
    {};
    virtual void print();
    virtual RealNumber add(const RealNumber& other);
    virtual RealNumber mul(const RealNumber& other);
};

class IntegerNumber: public RealNumber{
public:
    IntegerNumber ( int a ): RealNumber( a )
    {};
    void print();
    IntegerNumber add(const IntegerNumber& other);
    IntegerNumber mul(const IntegerNumber& other);
};

class ComplexNumber: public Number{
public:
    ComplexNumber ( double a , double b ):Number( a , b )
    {};
    void print();
    ComplexNumber add(const ComplexNumber& other);
    ComplexNumber mul(const ComplexNumber& other);
};
#endif
