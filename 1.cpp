#include<iostream>
using namespace std;

inline int factorial(int n){

	int fact = 1;
	
	for(int i = 1; i<=n;i++)
	{
		fact= fact* i;
	}
	return fact;
}
int main(){
	
	int arr[]={2,4,7,8,4};
	
	int n = sizeof(arr) / sizeof(arr[0]);
	for(int i=0;i<n;i++){
		
		cout<<"factorial of "<<arr[i]<<" is "<<factorial(arr[i])<<endl;
	}
	
	return 0;
	
}
