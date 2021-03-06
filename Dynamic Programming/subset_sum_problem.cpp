#include "codeblock.h"
bool findSubset (vector<int> &arr, int sum )
{
    int n = arr.size();
    vector<vector<bool>> t (n+1, vector<bool>(sum+1));
    for(int i =0; i < n+1; i++){
        for(int j =0; j < sum+1; j++){
            if(i == 0){
                t[i][j] = false;
            }
            if(j == 0){
                t[i][j] = true;
            }
            
        }
    }
    for(int i =1; i < n+1; i++){
        for(int j =1; j < sum+1; j++){
            if(arr[i-1] <= j){
                t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    //    for(int i =0; i < n+1; i++){
    //     for(int j =0; j < sum+1; j++){
    //        cout << t[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
   
    return t[n][sum];
}

int main ()
{
    vector <int> arr = input();
    int sum;
    cout << "Enter Sum :";
    cin >> sum;
    (findSubset(arr, sum) == true) ? cout << "Found": cout << "Not found";
    return 0;
}