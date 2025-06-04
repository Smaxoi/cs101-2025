#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class ReadClass {
public:
    void showClass() {
        ifstream file("main.cpp");
        string word, names[100];
        int count = 0;
        while (file >> word) {
            if (word == "class") file >> names[count++];
        }
        cout << count << " " << "class in main.cpp" << endl;
        for (int i = 0; i < count; i++)
            cout << "class " << names[i] << endl;
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
