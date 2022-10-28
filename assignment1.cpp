#include<iostream>
#include<array>
using namespace std;

int main(){
	int size;
	int nums[105];
	int target;
	int i=0;
	int j=0;
	int k;
	cout<<"Enter the length of array";
	cin>>size;
	cout<<"Enter the elements of array";
	while(i<size){
		cin>>nums[i];
		i++;
	}
	cout<<"Enter the target number";
	cin>>target;
	while(j<(size-1)){
		k=j+1;
		while(k<size){
			if((nums[j]+nums[k])==target){
				cout<<j;
				cout<<k;
		}
		k++;
	}
	j++;
}
}



