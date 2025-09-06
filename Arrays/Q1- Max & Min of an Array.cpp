#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[5] = {4,3,6,1,-1};
    int size = sizeof(arr)/sizeof(int);

    int largest = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"Largest:"<<largest;
}