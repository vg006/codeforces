//
// Created by Vijay Ganesh on 29-08-2024.
//

/*
 * Problem : Team
 * Link : https://codeforces.com/problemset/problem/231/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, problemSolved = 0;  cin >> n;
    while(n--) {
        int tmp, known = 0;
        for(int i = 0; i < 3; i++) {
            cin >> tmp;
            if(tmp)
                known++;
        }
        if(known > 1)
            problemSolved++;
    }
    cout << problemSolved << endl;
    return 0;
}