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
        ch = tolower(ch);

        if(ch >= 'a' && ch <= 'z') {
            flag = flag | (1 << (ch - 'a'));
        }
    }

    if(flag == (1 << 26) - 1)
        cout << "It is a Pangram";
    else
        cout << "Not a Pangram";

    return 0;
}