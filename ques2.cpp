#include <iostream>
using namespace std;
class Time
{
private:
    int h;
    int m;
    int s;

public:
    void setTime(int a, int b, int c) {
        h = a;
        m = b; 
        s = c;
    }
    void showTime() {
        cout << h << " hr " << m << " min " << s << " sec";
    }
    void normalize() {
        if(h > 24) {
            h = 24 - h;
        }
        if(m > 60) {
            m = m - 60;
            h++;
        }
        if(s > 60) {
            s = s - 60;
            m++;
            if(m > 60) {
                m = m - 60;
                h = 24 - h;
            }
        }
    }
    Time add(Time t) {
        Time temp;
        temp.h = h + t.h;
        temp.m = m + t.m;
        temp.s = s + t.s;
        return temp; 
    }
};