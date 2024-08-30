//
// Created by Vijay Ganesh on 30-08-2024.
//

/*
 * Problem : https://codeforces.com/problemset/problem/158/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;   cin >> n >> k;
    int tmp, place5, advancers = 0;

    for(int i = 0, j = k - 1; i < n; i++) {
        cin >> tmp;
        if(tmp) {
            if(i == j)  place5 = tmp;
            if(i < j || tmp == place5) {
                advancers++;
            }
        }
    }

    cout << advancers;

    return 0;
}