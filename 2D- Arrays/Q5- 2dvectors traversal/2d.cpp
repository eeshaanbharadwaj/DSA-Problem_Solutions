#include <bits/stdc++.h>
using namespace std;

void twodvector(vector<vector<int>> mat){
    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[i].size(); j++){
            cout<<mat[i][j]<<" ";  
        }
        cout<<endl;  
    }
}

int main(){
    vector<vector<int>> mat1 = {{1,2,3},{2,4,5,7},{2,7,9}};
    twodvector(mat1); 
    return 0;
}