#include <fstream>
#include <iostream>
#include <string>
using namespace std;
class ReadClass {
public:
    void showClass() {
        fstream in;
        in.open("main.cpp");
        string word, names[100];
        int counts = 0;
        while (in >> word) {
            if (word == "class") { in >> names[counts++]; }
        }
        cout << counts << " " << "class in main.cpp" << endl;
        for (int i = 0; i < counts; i++) {
            cout << "class " << names[i] << endl;
        }
    }
    
};

class myString {
private:
    string m_str; 
public:
    myString(string s) { m_str = s; }
};

int main() {
    ReadClass rfile;
    rfile.showClass();
    return 0;
}
