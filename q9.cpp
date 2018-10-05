#include<iostream>
using namespace std;
int fact(int a)
{if (a<1)
	return 1;
else
{	a*fact(a-1);
	return a*fact(a-1);
}}
int main(){
int no;
cout<<"type the number upto which you want its factorial"<<endl;
cin>>no;
int i=fact(no);
cout<<i<<endl;
return 0;
}
