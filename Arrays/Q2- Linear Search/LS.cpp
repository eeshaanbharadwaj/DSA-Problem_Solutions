#include<iostream>
using namespace std;

int Linear_Search(int arr[],int size,int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[] = {2,7,3,8,6,9,1};
    int b = Linear_Search(a,7,8);
    cout<<b;
    return 0;
}

//Time complexity: O(n)
//Linear time complexity