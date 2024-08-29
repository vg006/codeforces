//
// Created by Vijay Ganesh on 28-03-2024.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  cin >> t;
    vector <string> hours = {"12",
                             "01",
                             "02",
                             "03",
                             "04",
                             "05",
                             "06",
                             "07",
                             "08",
                             "09",
                             "10",
                             "11"};
    while (t) {
        string s;   getline(cin >> ws, s);
        int h = stoi(s.substr(0,2));
        s.replace(0,2,hours[h %12]);
        cout << s << (h < 12 ? " AM" : " PM") << endl;
        t--;
    }
    return 0;
}