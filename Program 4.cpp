#include<iostream>
using namespace std;
int main(){
	int arr1[10];
	cout<<"Enter 10 integers: \n";
	for(int i=0;i<10;i++){
		cin>>arr1[i];
	}
	int min=arr1[0],max=arr1[0];
	for(int i=1;i<10;i++){
		if(arr1[i]<min){
			min=arr1[i];
		}
		if(arr1[i]>max){
			max=arr1[i];
		}
	}
	cout<<"Maximum: "<<max<<endl;
	cout<<"Minimum: "<<min;
	return 0;
}

