#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[5] = {4,3,6,1,-1};
    int size = sizeof(arr)/sizeof(int);

    int largest = INT_MIN;
    int smallest = INT_MAX;
    for(int i=0; i<size; i++){
        largest = max(arr[i], largest);
        smallest = min(arr[i], smallest);
    }
    cout<<"Largest:"<<largest;
    cout<<"Smallest:"<<smallest;
}