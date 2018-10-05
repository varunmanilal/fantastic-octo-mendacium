#include<iostream>
using namespace std;
int qw(int a,int b)
{
 if (a>b) {
	return 0;}odd
 else {cout<< a <<endl;
	a=a+2;
	qw(a,b);
	return 0;}
}
int main(){
int d;
cout<<"Type the number upto which you want all odd numbers printed"<<endl;
cin>>d;
qw(1,d);
return 0;}
