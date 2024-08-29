//
// Created by Vijay Ganesh on 26-07-2024.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;  cin >> t;
    while(t) {
        double n;  cin >> n;
        double ans = n / 4;
        cout << ceil(ans) << endl;
        t--;
    }
    return 0;
}