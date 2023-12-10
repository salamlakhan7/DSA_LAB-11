#include<iostream>
using namespace std;
int main(){
	
	int arr2[2][5]={{2,5,7,9,4},{4,6,8,5,90}};
	for(int i=0;i<2;i++){
		
		for(int j=0;j<5;j++){
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

