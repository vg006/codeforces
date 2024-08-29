//
// Created by Vijay Ganesh on 29-08-2024.
//

/*
 * Problem : Way Too Long Words
 * Link : https://codeforces.com/problemset/problem/71/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  cin >> t;
    while(t--) {
        string s;   cin >> s;
        long int n = s.length();
        if(n > 10)
            cout << s[0] << n-2 << s[n-1] << endl;
        else
            cout << s << endl;
    }
    return 0;
}