#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int R, C;
    cout<<"Enter number of rows: ";
    cin>>R;
    cout<<"Enter number of columns: ";
    cin>>C;
    int matrix[R][C];
    cout<<"Enter elements of matrix: ";
    cout<<endl;
    for(int row = 0;row < R;row++){
        for(int col = 0;col < C;col++){
            cin>>matrix[row][col];
        }
    }
    
    int diff[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
    int ri,ci;
    cout<<"Enter the input row and col index: ";
    cin>>ri>>ci;
    int adjsum = 0;
    for(int i = 0;i < 8;i++){
        int ar = ri + diff[i][0];
        int ac = ci + diff[i][1];
        if(ar >=0 && ar < R && ac >= 0 && ac < C)
        adjsum += matrix[ar][ac];
    }
    cout<<"AdjSum : "<<adjsum;
}