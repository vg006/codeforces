//
// Created by Vijay Ganesh on 18-07-2024.
//

// NOTE : Passed the testcase, but failed on submission

#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;   cin >> test;
    while(test) {
        // Variables
        int n, x, tmp, ans = 0;
        vector<int> nums;

        // Inputs
        cin >> n >> x;
        for(int i = 0; i < n; i++) {
            cin >> tmp;
            nums.push_back(tmp);
        }

        // Operations
        int arr = (n * (n+1)) / 2;
        for(int i = 0; i < n; i++) {
            int g = 0;
            for(int j = i; j < n; j++) {
                g += nums[j];
                if(g > x) {
                    arr--;
                    g = 0;
                }
            }
        }

        // Output
        cout << arr << endl;
        test--;
    }
    return 0;
}