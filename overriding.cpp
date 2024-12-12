#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual void display(){
        cout << "I am Base" << endl;
    }
};

class Derived : public Base{
    public:
    void display() override{
        cout << "I am Derived" << endl;
    }
};

int main(){
    Base *b;
    Derived d;

    b = &d;
    b->display();

    return 0;
}