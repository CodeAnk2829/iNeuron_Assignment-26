/* Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit. */
#include <iostream>
using namespace std;
class Bill
{
private:
    int unit;

public:
    void get() {
        cout << "Enter units of your electricity: ";
        cin >> unit;
    }
    float calculateBill() {
        if(unit < 100) {
            return (1.20 * unit);
        } else if(unit < 200) {
            return (2 * unit);
        } else {
            return (3 * unit);
        }
    }

};