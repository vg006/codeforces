//
// Created by Vijay Ganesh on 28-03-2024.
//

/* QUESTION :
 * You are given an integer n.
 * Output a 2n×2n checkerboard made of 2×2 squares alternating '#' and '.', with the top-left cell being '#'.
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  cin >> t;
    while(t) {
        int n;  cin >> n;
        string hash = "##", dot = "..";
        bool startHash = false, isHash = false;
        for(int i = 0; i < 2 * n; i++) {
            if(i % 2 == 0)  startHash = !startHash;
            isHash = startHash;
            for(int j = 0; j < n; j++) {
                cout << (isHash ? hash : dot);
                isHash = !isHash;
            }
            cout << endl;
        }
        t--;
    }
    return 0;
}