#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   string s;
   cin >> s;

   int k;
   cin >> k;

   int op =0;
   string result = "";

   int i =0;
   while(i < s.size()){
    char ch = s[i];
    result+= ch;

    int j = i+1;

    while(j < s.size() && s[j] == ch){
        j++;
    }

    if(j-i > 1) op++;

    i=j;
   }

    if(op <= k) {
        cout << result;
    } else{
        cout << "NO";
    }

    return 0;

}