#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[] =  {1,5,6,7,8,3,2,4,9,0};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << n;
	//sort(arr, arr+n);
	sort(arr, arr+n, greater<int>());
	cout << "\nArray after sorting using default sort is : \n";
	for(int i = 0; i < n; ++i){
		cout << arr[i] << " ";
	}
	return 0;
}