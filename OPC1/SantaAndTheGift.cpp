#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;


    int power =0, gifts =0;

    while(gifts < n){
        gifts = gifts + pow(2, power);
        power++;
    }

    if(gifts == n){
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}