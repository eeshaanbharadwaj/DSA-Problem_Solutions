// Implement a function myPow(x, n) that calculates x raised to the power n (x^n), where x is a floating-point number and n is an integer.
// The solution should run in O(log n) time complexity using fast exponentiation.
// Example 1:
// Input: x = 2.0, n = 10
// Output: 1024.0
// Example 2:
// Input: x = 2.0, n = -2
// Output: 0.25
// Explanation: 2^-2 = 1 / (2^2) = 0.25
//leetcode problem
//TC: O(n)

class Solution {
    public:
        double myPow(double x, int n) {
            long binForm = n;
            if(n<0){
                x = 1/x;
                binForm = - binForm;
            }
            double ans = 1;
            while(binForm>0){
                if(binForm%2==1){
                    ans=ans*x;
                }
                x=x*x;
                binForm=binForm/2;
            }
            return ans;
        }
    };