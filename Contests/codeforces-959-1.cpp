//
// Created by Vijay Ganesh on 18-07-2024.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;  cin >> test;
    while(test) {
        // Input
        int t, n, m;
        deque<int> nums;
        cin >> n >> m;
        for(int i = 0; i < n * m; i++) {
            cin >> t;
            nums.push_back(t);
        }

        // Checks
        if(n*m == 1) {
            cout <<"-1"<< endl;
            test--;
            continue;
        }

        // Operations
        int last = nums.back();
        nums.pop_back();
        nums.push_front(last);

        // Output
        for(int i = 0; i < n * m; i++) {
            cout << nums[i] <<" ";
            if((i+1) % m == 0)  cout << endl;
        }
        test--;
    }
    return 0;
}