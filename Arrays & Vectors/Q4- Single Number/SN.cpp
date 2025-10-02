#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int val : nums) {
            ans ^= val; // XOR cancels duplicates: a ^ a = 0, and 0 ^ x = x
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) {
        vector<int> nums = {4, 1, 2, 1, 2};
        Solution sol;
        cout << sol.singleNumber(nums) << "\n";
        return 0;
    }
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    Solution sol;
    cout << sol.singleNumber(nums) << "\n";

    return 0;
}
