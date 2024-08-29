//
// Created by Vijay Ganesh on 30-07-2024.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;  cin >> t;
    while(t) {
        int n;      cin >> n;
        string s;   cin >> s;
        int c = 0;
        for(int i = n -1; i >= 0; i -= 2) {
            if(s[i] == ')') {
                int j = i -2;
                if(j >= 0 && s[j] == '(') {
                    c += 4;
                    i -= 2;
                } else {
                    c += 1;
                }
            }
        }
        cout << c << endl;
        t--;
    }
    return 0;
}