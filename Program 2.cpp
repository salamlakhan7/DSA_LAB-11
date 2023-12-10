#include<iostream>
using namespace std;
int main(){

	int arr1[10], arr2[10];
	cout<<"Enter 10 integers: \n";
	for(int i=0;i<10;i++){
		cin>>arr1[i];
	}
	int sum=0;
	long long int product=1;
	for(int i=0;i<10;i++){
		sum=sum+arr1[i];
		product=product*arr1[i];	
	}
	cout<<"Product of all elements in array is: "<<product<<endl;
	cout<<"Sum of all elements in array is: "<<sum<<endl;	
	return 0;
}

