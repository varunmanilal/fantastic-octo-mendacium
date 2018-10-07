#include<iostream>
using namespace std;
int rev(int a)
{if (a==0)
  return 0;
 else 
{ cout<< a%10;
  a=a/10;
  rev(a);
  return 0;
}
}
int main(){
int a;
cout<<"give the number which is to be reversed"<<endl;
cin>>a;
rev(a);
return 0;
}


