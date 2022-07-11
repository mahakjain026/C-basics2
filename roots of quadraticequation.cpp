#include<iostream>
#include <cmath>
using namespace std;
int main(){
   float a,b,c;
   cout<<"enter the value of a , b & c"<<endl;
   cin>>a>>b>>c;
   float d=(b*b)-(4*a*c);
   float e=sqrt(d);
   cout<<d<<endl;
   float root1=(-b+e)/(2*a);
   float root2=(-b-e)/(2*a);
  cout<<root1<<" "<<root2;

}