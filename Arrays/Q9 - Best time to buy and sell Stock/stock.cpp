// //Leetcode problem
// //Given an array prices where prices[i] is the price of a stock on day i, find the maximum profit you can achieve by choosing one day to buy and a later day to sell. If no profit is possible, return 0.

// Example:

// Input: prices = [7,1,5,3,6,4]  
// Output: 5  
// Explanation: Buy on day 2 (price=1), sell on day 5 (price=6), profit = 6-1 = 5

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int minPrice = INT_MAX;
            int maxProfit = 0;
    
            for (int price : prices) {
                minPrice = min(minPrice, price);                // keep track of lowest price so far
                maxProfit = max(maxProfit, price - minPrice);  // potential profit at this price
            }
    
            return maxProfit;
        }
    };
    