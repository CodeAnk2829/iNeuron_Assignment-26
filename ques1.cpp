#include <iostream>
using namespace std;
class Complex
{
private: 
    int a;
    int b;

public:
    void setData(int x, int y) {
        a = x; 
        b = y;
    }
    void showData() {
        cout << "real = " << a << "   img = " << b << endl;
    }
    Complex add(Complex C) {
        Complex temp;
        temp.a = a + C.a;
        temp.b = b + C.b;
        return temp;
    }
};