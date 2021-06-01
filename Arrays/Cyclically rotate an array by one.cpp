#include<iostream>
using namespace std;
void rotate (int arr[] , int n)
{
    int temp = arr[n-1];
    for(int i =n-1; i >= 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    
}
int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int *arr = new int [n];
	    for(int i = 0; i < n; i++)
	        cin >> arr[i];
	    rotate(arr,n);
	    for(int i = 0; i < n; i++)
	        cout << arr[i] << " ";
	    cout << endl;
	}
	return 0;
}