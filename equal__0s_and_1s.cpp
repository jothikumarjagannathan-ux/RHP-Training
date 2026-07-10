#include <iostream>
#include<map>
using namespace std;
int main()
{
    string s = "1001110011";
    map<int, int> mymap;
    int val = 0;
    int v = 0;
    int max_n = 0;
    mymap.insert(pair<int, int>(val, -1));
    for(int i = 0;i < s.length();i++){
        if(s[i] == '1'){
            val += 1;
        }
        else{
            val -= 1;
        }
        if(mymap.count(val)){
            v = i - mymap[val]; 
            max_n = max(v, max_n);
        }
        else{
             mymap.insert(pair<int, int>(val, i));
        }
    }
    cout<<max_n;
    
    return 0;
}