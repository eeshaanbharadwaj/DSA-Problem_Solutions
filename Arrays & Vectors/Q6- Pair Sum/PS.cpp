// //You are given a sorted array of integers and a target value. Your task is to find the indices of the two numbers in the array such that their sum is equal to the target.

// If such a pair exists, return the pair of indices (0-based indexing).

// If no such pair exists, return an empty list.

// Input:

// A vector nums of size n (sorted in ascending order).

// An integer target representing the sum to be achieved.

// Output:

// A vector of two integers representing the indices of the pair whose sum equals target.

// If no valid pair exists, return an empty vector.

// Example 1:
// Input: nums = [1, 6, 7, 9], target = 13
// Output: [1, 2]
// Explanation: nums[1] + nums[2] = 6 + 7 = 13

// Example 2:
// Input: nums = [2, 3, 4], target = 8
// Output: []
// Explanation: No two elements add up to 8



#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int i = 0, j = nums.size() - 1;

    while (i < j) {
        int sum = nums[i] + nums[j];
        if (sum > target) {
            j--;
        } else if (sum < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int> a = {1, 6, 7, 9};
    vector<int> ans = pairSum(a, 13);

    if (!ans.empty()) {
        cout << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}
