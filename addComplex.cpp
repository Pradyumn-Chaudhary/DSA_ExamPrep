#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
    float real;
    float img;
    
    public:
    Complex(float real,float img){
        this->real = real;
        this->img = img;
    }
    Complex add(Complex c){
        Complex result(0, 0);
        result.real = real + c.real;
        result.img = img + c.img;
        return result;
    }
    void display(){
        cout << real << " + " << img << "i" << endl;
    }
};

int
main()
{
    Complex c1(3, 9);
    Complex c2(1.4, 8.2);

    Complex c3 = c1.add(c2);
    c3.display();
    return 0;
}