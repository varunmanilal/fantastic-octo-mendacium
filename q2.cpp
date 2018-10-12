//this is the library file
#include<iostream>
using namespace std;
//the function for printing all the numbers
int qw(int a,int b)
{
 if (a>b) {
	return 0;}
 else {cout<< a <<endl;
	a++;
	qw(a,b);
	return 0;}
}
//the main function
int main(){
int d;
cout<<"Type the number upto which you want all numbers printed"<<endl;
cin>>d;
qw(1,d);
return 0;}

