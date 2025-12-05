#include<bits/stdc++.h>

using namespace std;

int main(){
    int x=0, n =0;
    string s;

    cin >> n;

    for(int i =0; i < n; i++){
        cin >> s;

        if(s == "++x"){
            x = ++x;
        } else if(s == "x++"){
            x = ++x;
        } else if(s == "--x"){
            x = --x;
        } else if(s == "x--"){
            x = x--;
        }
    } 

    cout << x << endl;
    return 0;

}

