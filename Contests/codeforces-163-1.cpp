//
// Created by Vijay Ganesh on 15-03-2024.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;  cin >> tc;
    while(tc) {
        int n;  cin >> n;
        if(n % 2 == 0) {
            int t = n / 4, r = n % 4;
            map <int, string> strs;
            strs[0] = "";
            strs[2] = "CCC";
            strs[4] = "AAABB";

            string s = "";
            for(int i = 0; i < t; i++) {
                s += strs[4];
            }
            if(r)   s += strs[2];

            cout << "YES\n" << s << endl;
        } else {
            cout << "NO" << endl;
        }
        tc--;
    }
    return 0;
}