#include <iostream>
using namespace std;

int ams(int a){
    int b,rem,result=0;
    b=a;

    while (b!=0) {
        rem=b%10;
        result+=rem*rem*rem;
        b/=10;
    }

    if (result==a)
        cout <<a<< " is an Armstrong number.";
    else
        cout <<a<< " is not an Armstrong number.";

}
int main(){
	int a;
	cout<<"Enter three digit number:";
	cin>>a;
	ams(a);
}
