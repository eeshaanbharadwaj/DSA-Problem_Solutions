//Binary Search using Recusrsion
//Time Complexiy-: O(logn)

#include<iostream>
using namespace std;

int BinarySearch(int arr[],int left, int right, int target){
        int mid = left + (right-left)/2;
        if(target<arr[mid]){
            return BinarySearch(arr,left,mid-1,target);
        }else if(target>arr[mid]){
            return BinarySearch(arr,mid+1,right,target);
        }else{
            return mid;
        }
        return -1;
    }

int main(){
    int a[] = {1,5,7,9,10,16};
    cout<<BinarySearch(a,0,5,5);
    return 0;
}