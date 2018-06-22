#include "number.h"

void Number::print()
{
    cout << x << endl;
}
Number Number::add(const Number& other)
{
    x+=other.x;
    return *this;
}
Number Number::mul(const Number& other)
{
    x*=other.x;
    return *this;
}

void RealNumber::print()
{
    cout << x << endl;
}
RealNumber RealNumber::add(const RealNumber& other)
{
    x+=other.x;
    return *this;
}
RealNumber RealNumber::mul(const RealNumber& other)
{
    x*=other.x;
    return *this;
}

void IntegerNumber::print()
{
    cout << x << endl;
}
IntegerNumber IntegerNumber::add(const IntegerNumber& other)
{
    x+=other.x;
    return *this;
}
IntegerNumber IntegerNumber::mul(const IntegerNumber& other)
{
    x*=other.x;
    return *this;
}

void ComplexNumber::print()
{
    if((this->y>0)&&(this->x!=0))
    cout << x << "+" << y << "i" << endl;
    else if(this->y==0)
    cout << x << endl;
    else if((this->y<0)&&(this->x!=0))
    cout << x << y << "i" << endl;
    else if((this->x==0)&&(this->y!=0))
    cout << y << "i" << endl;
}
ComplexNumber ComplexNumber::add(const ComplexNumber& other)
{
    x+=other.x;
    y+=other.y;
    return *this;
}
ComplexNumber ComplexNumber::mul(const ComplexNumber& other)
{
    x=x*(other.x)-y*(other.y);
    y=x*(other.y)+y*(other.x);
    return *this;
}
