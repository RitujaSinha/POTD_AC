#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;

    unordered_map<char,int> freq;
    for (char c : s) freq[c]++;

    int pairs = 0;
    for (auto &p : freq) {
        if (p.second >= 2)
            pairs++;
    }

    if (pairs >= 2)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    int t;

    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}