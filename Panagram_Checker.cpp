#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    int flag = 0;

    for(char ch : str) {
        ch = toupper(ch);

        if(ch >= 'A' && ch <= 'Z') {
            flag = flag | (1 << (ch - 'A'));
        }
    }

    if(flag == (1 << 26) - 1)
        cout << "It is a Pangram";
    else
        cout << "Not a Pangram";

    return 0;
}