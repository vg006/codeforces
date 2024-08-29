//
// Created by Vijay Ganesh on 11-03-2024.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  cin >> t;
    while(t) {
        int len;    string s;
        cin >> len >> s;

        int mapCount = 0, pieCount = 0, mapieCount = 0;
        size_t mapIdx = s.find("map"), pieIdx = s.find("pie"), mapieIdx = s.find("mapie");
        while(mapIdx != string::npos) {
            mapCount++;
            mapIdx = s.find("map",mapIdx + 1);
        }
        while(pieIdx != string::npos) {
            pieCount++;
            pieIdx = s.find("pie",pieIdx + 1);
        }
        while(mapieIdx != string::npos) {
            mapieCount++;
            mapieIdx = s.find("mapie",mapieIdx + 1);
        }
        cout << (mapCount + pieCount - mapieCount) << endl;
        t--;
    }
    return 0;
}