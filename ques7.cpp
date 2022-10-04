/* Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box. */
#include <iostream>
using namespace std;
class Box
{
private:
    int length;
    int breadth;
    int height;

public:
    Box(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }
    int volume() {
        return (length * breadth * height);
    }
};
int main() {
    Box b1(3, 4, 5);
    Box b2(5, 8, 10);
    cout << b1.volume() << endl;
    cout << b2.volume() << endl;
    return 0;
}