/* Define a class student and write a program to enter student details using constructor
and define member function to display all the details. */
#include <iostream>
#include <string.h>
#include <string>
using namespace std;
class Student
{
private: 
    int rollNumber;
    string name;
    string branch;
    int phoneNumber;

public:
    Student(int r, string str1, string str2, int n) {
        rollNumber = r;
        name = str1;
        branch = str2;
        phoneNumber = n;
    }
    void display() {
        cout << rollNumber << " " << name << " " << branch << " " << phoneNumber << endl;
    }
};
int main() {
    Student s1(1, "Ankit", "Computer Science", 87943);
    Student s2(2, "Prince", "Electronics and Communication", 72389);
    s1.display();
    s2.display();
    return 0;
}