#include <iostream>
#include<vector>
using namespace std;
int main()
{
    string s1, s2;
    cout<<"Enter string1: ";
    cin>>s1;
    cout<<"Enter string2: ";
    cin>>s2;
    int R = s1.length() + 1;
    int C = s2.length() + 1;
    int row_max_index = 0;
    int col_max_index = 0;
    vector<vector<int>> dp(R, vector<int>(C, 0));
    for(int i = 1;i < R;i++){
        for(int j = 1;j < C;j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            if(dp[i][j] > dp[row_max_index][col_max_index]){
                row_max_index = i;
                col_max_index = j;
            }
        }
    }
    int v = dp[row_max_index][col_max_index];
    string s = "";
    for(int i = row_max_index-v;i < row_max_index;i++){
        s += s1[i];
    }
    cout<<"Longest Substring: '"<<s<<"'";
    
}