#include <bits/stdc++.h>
using namespace std;

int diagnolSum(int mat[][3], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                sum+=mat[i][j];
            }else if(j==n-i-1){
                sum+=mat[i][j];
            }
        }
    }
    return sum;
}

int main(){
    int arr[3][3] = {{3,2,4},{5,7,4},{7,3,1}};
    cout<<diagnolSum(arr,3)<<endl;
    return 0;
}