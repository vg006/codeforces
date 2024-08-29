#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  cin >> t;
    while (t) {
        int n, m, k, tmp, pairs = 0;    cin >> n >> m >> k;
        vector<int> nCoins, mCoins;
        for(int i = 0; i < n; i++) {
            cin >> tmp;
            nCoins.push_back(tmp);
        }
        for(int i = 0; i < m; i++) {
            cin >> tmp;
            mCoins.push_back(tmp);
        }
        sort(nCoins.begin(),nCoins.end());
        sort(mCoins.begin(),mCoins.end());
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(nCoins[i] + mCoins[j] <= k)  pairs++;
                if(nCoins[i] + mCoins[j] > k)   break;
            }
        }
        cout << pairs << endl;
        t--;
    }
    return 0;
}