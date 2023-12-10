#include<iostream>
using namespace std;
int main(){
	int arr1[10], arr2[10];
	cout<<"Enter 10 integers: \n";
	for(int i=0;i<10;i++){
		cin>>arr1[i];
	}
	
	for(int i=0;i<10;i++){
		arr2[9-i]=arr1[i];
	
	}
	cout<<"Reversed array values are:\n";
	for(int i=0;i<10;i++){
		cout<<arr2[i]<<" ";
	}
	return 0;
}

