#include <iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    int base1Var;
    void displayBase1() {
        cout << "Base1 Variable: " << base1Var << endl;
    }
};

// Base class 2
class Base2 {
public:
    int base2Var;
    void displayBase2() {
        cout << "Base2 Variable: " << base2Var << endl;
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    int derivedVar;
    void display() {
        cout << "Derived Variable: " << derivedVar << endl;
    }
};

int main() {
    Derived obj;
    
    obj.base1Var = 10; // Access Base1's variable
    obj.displayBase1(); // Output: Base1 Variable: 10
    
    obj.base2Var = 20; // Access Base2's variable
    obj.displayBase2(); // Output: Base2 Variable: 20
    
    obj.derivedVar = 30;
    obj.display(); // Output: Derived Variable: 30
    
    return 0;
}
