//
// Created by Vijay Ganesh on 01-09-2024.
//

/*
 * Problem Name : Square or Not
 * Problem Link : https://codeforces.com/contest/2008/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

bool isOuter(int n, int i, int j) {
    return ((i == 0 || i == n-1) || (j == 0 || j == n-1) ? true : false);
}

bool isPerfectSq(int n) {
    int root = sqrt(n);
    return root * root == n;
}

int main() {
    int t;  cin >> t;
    while(t--) {
        int n;  cin >> n;
        string s;   cin >> s;
        string result = "YES";

        if(isPerfectSq(n)) {
            int root = sqrt(n);
            for(int idx = 0, i = 0, j = 0; idx < s.length(); idx++, j++) {
                if(j == root) {
                    j = 0;
                    i++;
                }
                if(isOuter(root, i, j)) {
                    if(s[idx] == '0') {
                        result = "NO";
                        break;
                    }
                } else {
                    if(s[idx] == '1') {
                        result = "NO";
                        break;
                    }
                }
            }
            cout << result << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}