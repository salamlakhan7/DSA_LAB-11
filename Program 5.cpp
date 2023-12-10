#include<iostream>
using namespace std;
int main(){
	int arr[7]={2,3,15,7,15,3,2};
	int flag=0;
	for(int i=0;i<7;i++){
		if(arr[i]!=arr[6-i]){
			cout<<"Not Palindrom";
			flag=1;
			break;
		}
		
	}
	if(flag==0){
		cout<<"Palindrom";
	}
	return 1;
}

