//
// Created by Vijay Ganesh on 30-08-2024.
//

/*
 * [Not Submitted]
 * Problem Name : Dora's Set
 * Problem Link : https://codeforces.com/contest/2007/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

bool areCoprime(int a, int b, int c) {
    return gcd(a, b) == 1 && gcd(b, c) == 1 && gcd(a, c) == 1;
}

bool isThereEven(int a, int b, int c) {
    return (a % 2 == 0 || b % 2 == 0 || c % 2 == 0);
}

int countCoprimeSets(int l, int r) {
    int count = 0;
    vector<int> nums;
    for(int i = l; i <= r; i++)
        nums.push_back(i);

    int n = r - l + 1;
    for(int i = 0; i < n - 2; i++) {
        for(int j = n - 1; j >= 0 && nums[i]; j--) {
            for(int k = j - 1; k >=0  && nums[j]; k--) {
                if(areCoprime(nums[i], nums[j], nums[k])) {
                    count++;
                    //cout <<"Coprimes : "<<  nums[i] <<" "<< nums[j] <<" "<< nums[k] << endl;
                    nums[i] = nums[j] = nums[k] = 0;
                }
            }
        }
    }

    return count;
}

int main() {
    int t;  cin >> t;
    vector<vector<int>> nums;

    while(t--) {
        int l, r, c = 0;   cin >> l >> r;
        if(l % 2 == 0) {
            l += 1;
        }
        while(l + 2 <= r) {
            c += 1;
            l += 4;
        }
        cout << c << endl;
    }

/*
    for(auto num : nums) {
        cout << countCoprimeSets(num[0], num[1]) << endl;
    }
*/

    return 0;
}