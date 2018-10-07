#include<iostream>
using namespace std;
int pal(int sum,int num)
{if (num%10==0){
if (sum==num){
	cout<<"The number is a palindrome";
	return 0;}
else
{	cout<<"The number is not a palindrome";
}}
else
{	sum=sum*10+num%10;
	return sum;}
}
int main(){
int a;
cout<<"Type the number to determine whether it is a palindrome"<<endl;
cin>>a;
pal(0,a);
return 0;
}
