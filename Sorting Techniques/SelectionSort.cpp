//Time Complexity: O(n^2)

#include<iostream>
#include<vector>

using namespace std;

void SelectionSort(vector<int>&arr, int n){
    for(int i=0; i<n-1; i++){
        int smallest = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[smallest]){
                smallest = j;
            }
        }
        swap(arr[i],arr[smallest]);
    }

}

int main(){
    vector<int> a = {4,2,5,6,8,1};
    int n = 6;
    SelectionSort(a,n);
    for(int x: a){
        cout<<x<<" ";
    }
    return 0;
}