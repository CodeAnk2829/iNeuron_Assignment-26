// Define a class Date and write a program to Display Date and initialise date object using Constructors.
#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int dd, int mm, int yy) {
        day = dd;
        month = mm;
        year = yy;
    }
    void display() {
        if(day < 10) {
            if(month < 10) {
                cout << "0" << day << "-0" << month << "-" << year << endl;
            } else {
                cout << "0" << day << "-" << month << "-" << year << endl;
            }
        } else {
            if (month < 10) {
                cout << day << "-0" << month << "-" << year << endl;
            }
            else {
                cout << day << "-" << month << "-" << year << endl;
            }
        }
    }
};
int main() {
    Date d1(2, 5, 2022);
    Date d2(12, 4, 2022);
    Date d3(1, 11, 2022);
    Date d4(12, 11, 2022);

    d1.display();
    d2.display();
    d3.display();
    d4.display();
    return 0;
}