#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int maxAllowedPages) {
    int stu = 1, pages = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxAllowedPages) {
            return false; // Can't allocate this book to any student
        }

        if (pages + arr[i] > maxAllowedPages) {
            // Allocate to next student
            stu++;
            pages = arr[i];

            if (stu > m) return false;
        } 
        else {
            pages += arr[i];
        }
    }
    return true;
}

int allocate(vector<int> &arr, int n, int m) {
    if (m > n) return -1;

    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];

    int ans = -1;
    int st = 0, end = sum;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;  // Try to minimize
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = arr.size(), m = 2;

    cout << allocate(arr, n, m) << endl;
    return 0;
}
