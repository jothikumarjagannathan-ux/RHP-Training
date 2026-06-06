#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cin >> str;

    int n = str.length();

    for (int mask = 1; mask < (1 << n); mask++) {
        string comb = "";

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i))
                comb += str[i];
        }

        cout << comb << endl;
    }

    return 0;
}