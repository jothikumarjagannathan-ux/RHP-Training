#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int s, n;
    cin>>s>>n;
    vector<int> A(s);
    vector<int> B(n);
    for(int i = 0;i < s;i++){
        cin>>A[i];
    }
    for(int i = 0;i < n;i++){
        cin>>B[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    int a = s-1;
    int b = n-1;
    int count = 0;
    while(b >= 0){
        if(B[b] <= (2*A[a])){
            count += 1;
            a--;
            b--;
        }
        else{
            b--;
        }
    }
    
    cout<<count<<endl;

}