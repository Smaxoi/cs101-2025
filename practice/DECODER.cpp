#include <iostream>
#include <string>
using namespace std;

class Decoder {
    string s;
public:
    Decoder(string str) { s = str; }

    string get_decode() {
        string res = "", seg = "";
        for (char c : s) {
            if (isalpha(c)) {
                seg += c;
            } else if (isdigit(c)) {
                int times = c - '0';
                for (int i = 0; i < times; ++i)
                    res += seg;
                seg = ""; 
            }
        }
        return res;
    }
};

int main() {
    Decoder d("A3BB2CCC2");
    cout << d.get_decode();  // ➜ AAABBBBCCCC
    return 0;
}
