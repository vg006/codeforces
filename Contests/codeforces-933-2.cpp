//
// Created by Vijay Ganesh on 11-03-2024.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  cin >> t;
    while(t) {
        int n, tmp;  cin >> n;
        vector<int> in, nums(n,0);
        for(int i = 0; i < n; i++) {
            cin >> tmp;
            in.push_back(tmp);
        }
        for(int i = 1; i < n - 1; i++) {
            int m = in[i-1] - nums[i-1];
            nums[i-1] += (m * 1);
            nums[i+1] += (m * 1);
            nums[i] += (m * 2);
        }
        cout << (in == nums ? "YES" : "NO") << endl;
        t--;
    }
    return 0;
}
