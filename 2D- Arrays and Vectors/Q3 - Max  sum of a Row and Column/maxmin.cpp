#include <bits/stdc++.h>
using namespace std;

int maxSumRow(int mat[][3], int row, int col){
    int sum = INT_MIN;
    for(int i=0; i<row; i++){
        int rowSum=0;
        for(int j=0; j<col; j++){
            rowSum+=mat[i][j];
        }
        sum = max(sum,rowSum);
    }
    return sum;
}

int maxSumCol(int mat[][3], int row, int col){
    int sum = INT_MIN;
    for(int i=0; i<col; i++){
        int colSum=0;
        for(int j=0; j<row; j++){
            colSum += mat[i][j]; 
        }
        sum = max(sum,colSum);
    }
    return sum;
}

int main(){
    int arr[3][3] = {{3,2,4},{5,7,4},{7,3,1}};
    cout<<"Maximum sum of a Row is:"<<maxSumRow(arr,3,3)<<endl;
    cout<<"Maximum sum of a col is: "<<maxSumCol(arr,3,3);
    return 0;
}