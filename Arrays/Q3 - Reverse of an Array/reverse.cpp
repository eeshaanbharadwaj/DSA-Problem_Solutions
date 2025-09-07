#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
}

int main(){
    int a[] = {3,5,6,1,7,4};
    int n = sizeof(a)/sizeof(int);
    reverse(a, n);
    return 0;
}