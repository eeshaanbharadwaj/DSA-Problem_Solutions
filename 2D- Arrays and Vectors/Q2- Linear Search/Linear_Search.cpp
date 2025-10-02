#include<iostream>
using namespace std;

bool LinearSearch(int matrix[][3], int row, int col, int key){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][3]={{2,5,2},{8,2,1},{9,7,5}};
    cout<<LinearSearch(arr, 3, 3, 8);
    return 0;
}