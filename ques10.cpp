/* Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result. */
#include <iostream>
using namespace std;
class StaticCount
{
private:
    static int k;

public: 
    static void Increment() {
        k++;
    }
    static void display() {
        cout << k << endl;
    }
};
int StaticCount :: k = 0;
int main() {
    StaticCount :: Increment();
    StaticCount :: Increment();
    StaticCount :: Increment();
    
    StaticCount :: display();

    return 0;
}