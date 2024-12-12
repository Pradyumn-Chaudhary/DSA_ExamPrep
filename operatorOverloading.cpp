#include <bits/stdc++.h>
using namespace std;

class Number
{
public:
    int x;
    Number(int x)
    {
        this->x = x;
    }
    Number operator-()
    {
        return Number(-x);
    }
    void display()
    {
        cout << x << endl;
    }
};

class Complex
{
public:
    float real;
    float img;
    Complex(float real, float img)
    {
        this->real = real;
        this->img = img;
    }
    Complex operator+(Complex c)
    {
        return Complex(real + c.real, img + c.img);
    }
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    Number a(7);
    a.display();
    Number b = -a;
    b.display();

    Complex c1(4.7, 2.9);
    c1.display();
    Complex c2(4.2, 1.4);
    c2.display();
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}