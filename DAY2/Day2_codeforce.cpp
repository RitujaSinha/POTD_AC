#include<bits/stdc++.h>
using namespace std;

int solve(){
    int x, y, n, ans = 0; 
    cin >> n;

    if(n % 2 != 0){
        cout << 0 << endl;
        return 0;
    }

    for(int i = 0; i <= n/2; i++){   
        x = i;

        int temp = n - 2 * x;

        if(temp % 4 == 0){
            y = temp / 4;
        } else{
            continue;
        }

        if(y >= 0){
            ans++;
        }
    }

    cout << ans << endl;
    return ans;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
