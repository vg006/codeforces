//
// Created by Vijay Ganesh on 03-09-2024.
//

/*
 * [Not Accepted]
 * Problem Name : NA
 * Problem Link : https://codeforces.com/contest/2009/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

int minOps(vector<int> t) {
    int x = t[0], y = t[1], k = t[2];

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin >> t;
    vector<vector<int>> tests;
    while(t--) {
        int x, y, k;    cin >> x >> y >> k;
        tests.push_back({x, y, k});
    }
    for(vector<int> test : tests) {
        cout << minOps(test) << endl;
    }
    return 0;
}