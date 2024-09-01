//
// Created by Vijay Ganesh on 01-09-2024.
//

/*
 * Problem Name : Longest Good Array
 * Problem Link : https://codeforces.com/contest/2008/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  cin >> t;
    while(t--) {
        int l, r, len = 0;  cin >> l >> r;
        for(int inc = 1; l <= r; inc++) {
            l += inc;
            len++;
        }
        cout << len << endl;
    }
    return 0;
}