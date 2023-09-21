#include<iostream>
using namespace std;
int main(){
	//declare an array
int	arr1[5];
int a,j;
// input the array from user
for(int i=0; i<5; i++){
	cout<<"Enter "<<i+1<<" index in array: ";
	cin>>arr1[i];
}
// enter the number you want to check in array
cout<<"enter a number to be validate: ";
cin>>a;
// for loop to check weather the number is present in array or not
for(int i=0;i<5;i++){
if(a==arr1[i]){

cout<<a<<" is present in array";
}

}
if(a!=arr1[j]){
	cout<<a<<" is not present in array";
}
}
