//
// Created by Vijay Ganesh on 30-08-2024.
//

/*
 * Problem : https://codeforces.com/problemset/problem/1915/D
 * Tags : [greedy] [implementation] [strings]
 */

#include <bits/stdc++.h>
using namespace std;

bool isVow(char ch) {
    return ch == 'a' || ch == 'e';
}

int main() {
    int t;  cin >> t;
    while(t--) {
        int len;
            cin >> len;
        string s, p, ans;
            cin >> s;

        for(int i = 0; i < len; i++) {
            p += isVow(s[i]) ? 'v' : 'c';
            if (p == "cv") {
                ans += s[i];
                ans += '.';
                p.clear();
            } else if(p == "cc" || p == "vc" || p == "vv") {
                ans += '.';
                ans += s[i];
            }
        }

        cout << ans << endl;
    }
    return 0;
}