//
// Created by Vijay Ganesh on 30-08-2024.
//

/*
 * Problem : https://codeforces.com/problemset/problem/1927/B
 * Tags : [constructive] [algorithms] [greedy] [strings]
 */

#include <bits/stdc++.h>
using namespace std;

struct Alphabets {
    deque<char> alphabets = {
            'a','b','c','d','e','f',
            'g','h','i','j','k','l',
            'm','n','o','p','q','r',
            's','t','u','v','w','x',
            'y','z'
    };
};
int main() {
    int t, tmp;  cin >> t;
    deque<char> chars;
    while(t--) {
        int len;    cin >> len;
        string s;
        map<int, Alphabets> c;

        for(int i = 0; i < len; i++) {
            cin >> tmp;
            s += c[tmp].alphabets.front();
            c[tmp].alphabets.pop_front();
        }

        cout << s << endl;
    }
    return 0;
}