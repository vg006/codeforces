//
// Created by Vijay Ganesh on 30-08-2024.
//

/*
 * [Not submitted]
 * Problem : https://codeforces.com/problemset/problem/1291/A
 * Tags : [greedy] [math] [strings]
 */

#include <bits/stdc++.h>
using namespace std;

bool isOdd(int n) {
    return n % 2;
}

int main() {
    int t;  cin >> t;
    while(t--) {
        int n, numlen, anslen = 0;
        unsigned long long int num, ans = 0;
        cin >> numlen >> num;
        while(num) {
            n = num % 10;
            if(isOdd(n)) {
                cout << n;
                ans += n * pow(10,anslen);
                anslen++;
            }
            num /= 10;
        }
        ans = !isOdd(anslen) ? ans : ans /10;
        cout << endl << (ans ? ans : -1) << endl;
    }
    return 0;
}