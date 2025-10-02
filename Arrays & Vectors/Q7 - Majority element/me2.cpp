//Moore's Voting Algorithm
//Time Complexity: O(n)
//another way of finding Majority Element

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>nums){
    int freq=0, ans=0;
    for(int i=0; i<nums.size(); i++){
        if(freq==0){
            ans = nums[i];
        }if(ans==nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}

int main(){
    vector<int>a = {1,1,1,4,4};
    cout<<majorityElement(a);
}