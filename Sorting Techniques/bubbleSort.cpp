//Time Complexiy-: O(n^2)
//Optomised bubbleSort

#include <iostream>
#include<vector>
using namespace std;

vector<int> bubbleSort(vector<int> arr, int n){
    for(int i=0; i<n-1; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return arr;
        }
    }
    return arr;
}

int main(){
    vector<int> a = {6,4,3,2,9};
    int n = a.size();
    vector<int> sorted = bubbleSort(a, n);
    
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << sorted[i] << " ";
    }
    cout << endl;
    
    return 0;
}