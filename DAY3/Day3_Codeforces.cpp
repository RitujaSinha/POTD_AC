#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n , m, a;
    long long result;

    cin >> n >> m >> a;

    long long tile1 = (n + a - 1) / a;
    long long tile2 = (m + a - 1) / a;

    result = tile1 * tile2;

    cout << result << endl;

    return 0;
}
