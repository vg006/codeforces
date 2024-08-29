//
// Created by Vijay Ganesh on 29-08-2024.
//

/*
 * Problem : Watermelon
 * Link : https://codeforces.com/problemset/problem/4/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int w;  cin >> w;
    cout << (w % 2 || w == 2? "NO" : "YES") << endl;
    return 0;
}