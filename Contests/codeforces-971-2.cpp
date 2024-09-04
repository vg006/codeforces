//
// Created by Vijay Ganesh on 03-09-2024.
//

/*
 * [Not Accepted]
 * Problem Name : NA
 * Problem Link : NA
 */

#include <bits/stdc++.h>
using namespace std;

void printNotes (vector<string> strs) {
    for(string s : strs) {
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '#') {
                cout << i + 1 <<' ';
                break;
            }
        }
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin >> t;
    vector<vector<string>> tests;
    while(t--) {
        int n;  cin >> n;
        vector<string> strs;
        string tmp;
        while(n--) {
            cin >> tmp;
            strs.push_back(tmp);
        }
        tests.push_back(strs);
    }
    for(vector<string> test : tests) {
        printNotes(test);
    }
    return 0;
}