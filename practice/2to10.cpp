#include <iostream>
#include <string>
using namespace std;

class Bin2Decimal {
    string bin;
public:
   
    Bin2Decimal(string b) {
        bin = b;
    }

    int to_decimal() {
        cout << bin << " -> ";
        return stoi(bin, nullptr, 2);
    }

    int to_decimal(string b) {
        cout << b << " -> ";
        return stoi(b, nullptr, 2);
    }
};

int main() {
    Bin2Decimal d("1000");
    cout << d.to_decimal() << endl;
    cout << d.to_decimal("1111") << endl;
    return 0;
}
