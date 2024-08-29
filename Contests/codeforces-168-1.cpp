#include <bits/stdc++.h>

using namespace std;

void print(string s, int idx) {
    for(int i = 0; i < s.length(); i++) {
        if(i == idx) {
            char ch = s[i] + 1;
            if(s[i] == 'z')
                cout << 'y';
            else
                cout << ch;
        }
        cout << s[i];
    }
    cout << endl;
}

int main() {
    int t;  cin >> t;
    while(t) {
        string s;   cin >> s;
        int n = s.length();
        int i = 0;
        for(int j = 1; j < n; j++)
            if(s[j - 1] == s[j])
                i = j;
        print(s, i);
        t--;
    }
    return 0;
}