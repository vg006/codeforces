//
// Created by Vijay Ganesh on 30-08-2024.
//

/*
 * Problem : https://codeforces.com/problemset/problem/282/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int ops;    cin >> ops;
    string op;
    signed int ans = 0;

    while(ops--) {
        cin >> op;
        if(op[1] == '+')  ans++;
        else            ans--;
    }

    cout << ans;
    return 0;
}