#include<iostream>
using namespace std;
int add(int i,int no,int ans)
{if (i>no){
return ans;}
else {ans+=i;
	i++;
	add(i,no,ans);
	return add(i,no,ans);
}}
int main(){
int a;
cout<<"give the number upto which summation is to be done"<<endl;
cin>>a;

int i=add(1,a,0);
cout<<i<<endl;
return 0;
}
