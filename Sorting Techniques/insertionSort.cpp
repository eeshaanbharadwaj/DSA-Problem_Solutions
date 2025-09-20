//Time Complexity: O(n^2) worst case, O(n) best case
//Space Complexity: O(1)

#include<iostream>
#include<vector>

using namespace std;

void insertionSort(vector<int>& arr, int n){
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int j = i - 1;
        
        while(j >= 0 && arr[j] > curr){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }
}

int main(){
    vector<int> arr = {12, 11, 13, 5, 6};
    int n = arr.size();
    
    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    insertionSort(arr, n);
    
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}