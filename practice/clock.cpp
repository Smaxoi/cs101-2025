#include <iostream>
#include <string>
using namespace std;

class Clock {
protected:
    int h, m, s;
    string ap;
public:
    Clock(int hour, int min, int sec, string ampm) {
        h = hour; m = min; s = sec; ap = ampm;
    }
    void display() {
        cout << "Clock = " << h << ":" << m << ":" << s << " " << ap << endl;
    }
};

class CGUClock : public Clock {
public:
    CGUClock(int hour, int min, int sec, string ap) : Clock(hour, min, sec, ap) {
        if (ap == "PM" && hour != 12) h += 12;
        if (ap == "AM" && hour == 12) h = 0;
    }
    void display() {
        cout << "CGUClock = " << h << "時" << m << "分" << s << "秒" << endl;
    }
};

int main() {
    Clock cc(10, 25, 43, "AM");
    CGUClock cguc(10, 25, 43, "PM");
    cc.display();
    cguc.display();
    return 0;
}
