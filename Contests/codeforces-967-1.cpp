//
// Created by Vijay Ganesh on 20-08-2024.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;  cin >> t;
    while(t) {
        // Inputs
        int n;  cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Operations
        int m = 0;
        vector<int> nums(100,0);
        for(int i : a) {
            nums[i]++;
            if(nums[i] > m)
                m = nums[i];
        }

        // Outputs
        cout << (m || n != 1 || m == n ? n-m : n-1) << endl;
        t--;
    }
    return 0;
}