//
// Created by Vijay Ganesh on 15-03-2024.
//
#include <bits/stdc++.h>
using namespace std;

deque<int> digitsOf(int n) {
    deque<int> ans;
    while(n) {
        ans.push_front(n%10);
        n /= 10;
    }
    return ans;
}

bool isSorted(deque<int> nums) {
    for(int i = 0, j = 1; j < nums.size(); i++, j++) {
        if(nums[i] > nums[j])   return false;
    }
    return true;
}

int main() {
    int tc;  cin >> tc;
    while(tc) {
        int n, tmp;  cin >> n;
        bool flag = false;
        deque<int> inp;
        for(int i = 0; i < n; i++) {
            cin >> tmp;
            inp.push_back(tmp);
        }
        for(int num : inp) {
            deque<int> nums;
            if(num > 10) {
                deque<int> d = digitsOf(num);
                nums.insert(nums.end(),d.begin(),d.end());
            } else {
                nums.push_back(tmp);
            }
            if(isSorted(nums))  flag = true;
        }

        cout << (flag ? "YES" : "NO") << endl;
        tc--;
    }
    return 0;
}
