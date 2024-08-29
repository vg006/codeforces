//
// Created by Vijay Ganesh on 28-03-2024.
//

/* QUESTION :
 * You are given three digits a, b, and c.
 * Determine whether they form a stair, a peak, or neither.
 * A stair satisfies the condition a<b<c.
 * A peak satisfies the condition a<b>c.
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  cin >> t;
    while(t) {
        int a, b, c;    cin >> a >> b >> c;
        if(a < b && b < c)  cout << "STAIR" << endl;
        else if(a < b && b > c)  cout << "PEAK" <<endl;
        else    cout << "NONE" << endl;
        t--;
    }
    return 0;
}