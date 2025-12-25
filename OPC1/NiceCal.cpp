#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;

    string b;
    cin >> b;

    int i = a.size()-1;
    int j = b.size()-1;

    string result = "";

    while(i >= 0 || j >= 0){
        int dig1 = 0, dig2 =0;

        if(i >= 0){
            dig1 = a[i] - '0';
        }
        if(j >= 0){
            dig2 = b[j] - '0';
        }

        int sum = dig1 + dig2;

        result = to_string(sum) + result;

        i--;
        j--;
    }

    cout << result;

    return 0;
}