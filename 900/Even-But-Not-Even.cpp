//
// Created by Vijay Ganesh on 30-08-2024.
//

/*
 * Problem : https://codeforces.com/problemset/problem/1291/A
 * Tags : [greedy] [math] [strings]
 */

#include <bits/stdc++.h>
using namespace std;

bool isOdd(int n) {
    return n % 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;  cin >> t;
    while(t--) {
        int n, numlen;
        string num, ans = "";
        cin >> numlen >> num;
        for(char ch : num) {
            n = ch - '0';
            if(isOdd(n)) {
                ans.push_back(ch);
            }
        }
        if(isOdd(ans.length()))
            ans.pop_back();
        cout << (ans.length() ? ans : "-1") << endl;
    }
    return 0;
}