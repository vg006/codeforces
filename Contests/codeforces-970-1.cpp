//
// Created by Vijay Ganesh on 01-09-2024.
//

/*
 * Problem Name : Sakurako's Exam
 * Problem Link : https://codeforces.com/contest/2008/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  cin >> t;
    while(t--) {
        int a, b;   cin >> a >> b;
        if(!a) {
            cout << (b % 2 ? "NO" : "YES") << endl;
        } else {
            cout << (a % 2 ? "NO" : "YES") << endl;
        }
    }
    return 0;
}