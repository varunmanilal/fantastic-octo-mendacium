//open the library
#include<iostream>
using namespace std;
//take up the recursive function
int pw(int res,int no,int num)
{
//using if and else define the function
if (no==0){
return res;}
else {
res=num*pw(res,(--no),num);
return res;}
}
//The main function
int main(){
  //the variables
int a,b;
  //what is to be printed
cout<<"Type the number and the power whose result you want"<<endl;
cin>>a;
cin>>b;
//give the function with the variables
int q=pw(1,b,a);
cout<<q;
return 0;}

