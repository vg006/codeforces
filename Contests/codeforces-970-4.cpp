//
// Created by Vijay Ganesh on 01-09-2024.
//

/*
 * Problem Name : Sakurako's Hobby
 * Problem Link : https://codeforces.com/contest/2008/problem/D
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  cin >> t;
    while(t--) {
        int len;    cin >> len;
        string s;   cin >> s;

        int minOps = len % 2;
        int oddMajor = 0, eveMajor = 0;
        map<char, int>  oddChar, eveChar;


        for(int odd = 0, eve = 1;
            odd < len;
            odd += 2, eve += 2)
        {
            oddChar[s[odd]]++;
            eveChar[s[eve]]++;

            oddMajor = max(oddMajor, oddChar[s[odd]]);
            if(eve < len)   eveMajor = max(eveMajor, eveChar[s[eve]]);
        }

        int oddMinor = ((len - minOps) / 2) - oddMajor;
        int eveMinor = ((len - minOps) / 2) - eveMajor;

        minOps += (oddMinor + eveMinor);

        cout << minOps << endl;
    }
    return 0;
}