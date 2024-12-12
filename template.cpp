#include <iostream>
using namespace std;

template <typename T>
class Sum{
    public:
    T add(T a,T b,T c){
        return a + b + c;
    }
    void display(){
    }
};

int main()
{
    Sum<int> Int;
    cout << Int.add(3, 5, 9) << endl;

    Sum<float> Float;
    cout << Float.add(7.4, 6.2, 9.3) << endl;
    return 0;
}