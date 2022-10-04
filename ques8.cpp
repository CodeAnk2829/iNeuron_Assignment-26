/* Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor. */
#include <iostream>
using namespace std;
class Bank
{
private:
    int principal;
    int time;
    static int rateOfInterest;

public:
    void setData(int p, int t) {
        principal = p;
        time = t;
    }
    void simple_Interest() {
        float si;
        si = (principal * rateOfInterest * time) / 100.0;
        cout << si << endl;
    }
};
int Bank::rateOfInterest = 5;

int main() {
    Bank b1;
    b1.setData(13083, 3);
    b1.simple_Interest();
    return 0;
}