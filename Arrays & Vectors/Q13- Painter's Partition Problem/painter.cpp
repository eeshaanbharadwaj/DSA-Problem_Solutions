#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int maxAllowed) {
    int stu = 1, pages = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxAllowed) return false;

        if (pages + arr[i] > maxAllowed) {
            stu++;
            pages = arr[i];

            if (stu > m) return false;
        } else {
            pages += arr[i];
        }
    }
    return true;
}

int painter(vector<int>& arr, int n, int m) {
    int sum = 0, maxi = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxi = max(maxi, arr[i]);
    }

    int st = maxi, end = sum;
    int ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1; // try to minimize the maximum time
        } else {
            st = mid + 1; // need to allow more time
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n = arr.size(), m = 2;

    cout << painter(arr, n, m) << endl;
    return 0;
}
