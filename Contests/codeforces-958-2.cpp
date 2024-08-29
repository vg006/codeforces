//
// Created by Vijay Ganesh on 15-07-2024.
//

/**
 * You are given a sequence [a1,…,an] where each element a is either 0 or 1. You can apply several (possibly zero) operations to the sequence. In each operation, you select two integers 1≤l≤r≤|a|
 * (where |a| is the current length of a) and replace [al,…,ar] with a single element x, where x is the majority of [al,…,ar].
 * Here, the majority of a sequence consisting of 0 and 1 is defined as follows: suppose there are c0 zeros and c1 ones in the sequence, respectively.

    If c0≥c1, the majority is 0
    If c0<c1, the majority is 1

    For example, suppose a=[1,0,0,0,1,1]
    If we select l=1,r=2, the resulting sequence will be [0,0,0,1,1]
    If we select l=4,r=6, the resulting sequence will be [1,0,0,1]

    Determine if you can make a=[1] with a finite number of operations.

    Input :
    Each test contains multiple test cases. The first line contains the number of test cases t(1≤t≤4⋅104).
    Description of the test cases follows.

    The first line of each testcase contains one integer n(1≤n≤2⋅105).
    The second line of each testcase contains a string consisting of 0 and 1, describing the sequence a.

    It's guaranteed that the sum of n over all testcases does not exceed 2⋅105

    Output :
    For each testcase, if it's possible to make a=[1], print YES. Otherwise, print NO.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;  cin >> t;
    while(t) {
        int n;                  cin >> n;
        string s, str = "";     cin >> s;

        int c0 = 0, c1 = 0;
        for(char ch : s) {
            if(str.length()) {
                if(str[str.length() -1] != ch) {
                    str += ch;
                    if(ch == '1')   c1++;
                    else            c0++;
                }
            } else {
                str += ch;
                if(ch == '1')   c1++;
                else            c0++;
            }
        }
        cout << (c1 > c0 ? "YES" : "NO") << endl;
        t--;
    }
    return 0;
}