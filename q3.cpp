//the library file
#include<iostream>
using namespace std;
//the function which will print all the odd numbers upto any number you type
int qw(int a,int b)
{
 if (a>b) {
	return 0;}
 else {cout<< a <<endl;
	a=a+2;
	qw(a,b);
	return 0;}
}
//the main function
int main(){
int d;
cout<<"Type the number upto which you want all odd numbers printed"<<endl;
cin>>d;
qw(1,d);
return 0;}
