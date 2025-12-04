#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n ,k;

    cin >> n >> k;

    int arr[n] = {0};

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cutoff = arr[k-1];
    int count = 0;

    for(int i =0; i < n; i++){
        if(arr[i] >= cutoff && arr[i] > 0){
            count++;
        }
        else{
            break;;
        }
    }

    cout << count << endl;

    return 0;
}