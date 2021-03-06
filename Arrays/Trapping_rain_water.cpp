#include<bits/stdc++.h>
using namespace std;

int trappingWater(int arr[], int n){
    int lmax[n];
    int rmax[n];
    int res = 0;

    lmax[0] = arr[0];
    for(int i =1; i < n-1; i++){
        lmax[i] = max(arr[i] ,lmax[i-1]);
    }        
    rmax[n-1] = arr[n-1];
    for(int i =n-2; i>=0; i--){
        rmax[i] = max(arr[i] ,rmax[i+1]);
    }        
    for(int i =1; i < n-1; i++){
        res += min(lmax[i],rmax[i]) - arr[i];
    }

    return res;
}
int main()
{
    int N = 6;
    int arr[] = {3,0,0,2,0,4};
    cout << trappingWater(arr,N);
}
