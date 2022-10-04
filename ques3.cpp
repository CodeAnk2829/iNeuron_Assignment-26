/* Define a class Cube and calculate Volume of Cube and initialise it using constructor. */
#include <iostream>
using namespace std;
class Cube
{
private: 
    int len;

public:
    Cube(int l) {
        len = l;
    }
    int Volume() {
        return (len * len * len);
    }
};