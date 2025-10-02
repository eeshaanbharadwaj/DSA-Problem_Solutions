#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Function to check if we can place all cows with at least 'minDist' apart
bool isPossible(vector<int> &arr, int n, int cow, int minDist) {
    int cowsPlaced = 1;
    int lastStall = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] - lastStall >= minDist) {
            cowsPlaced++;
            lastStall = arr[i];
        }
        if (cowsPlaced >= cow) return true; // all cows placed
    }
    return false;
}

int aggressiveCows(vector<int> &arr, int n, int cow) {
    sort(arr.begin(), arr.end()); // sort stall positions once

    int smallest = arr[0];
    int largest = arr[n - 1];

    int st = 1, end = largest - smallest;
    int ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isPossible(arr, n, cow, mid)) {
            ans = mid;     // store this as a possible answer
            st = mid + 1;  // try for a bigger minimum distance
        } else {
            end = mid - 1; // try for a smaller distance
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 8, 4, 9};
    int n = arr.size(), m = 3;

    cout << aggressiveCows(arr, n, m) << endl;
    return 0;
}
