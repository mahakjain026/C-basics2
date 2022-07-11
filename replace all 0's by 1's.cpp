#include<iostream>
using namespace std;
int main(){
    int num,digit,rem=0,num2;
    cout<<"Enter the number - ";
    cin>>num;
    while(num!=0){
        rem=num%10;
        if(rem==0){
            rem=1;
        }
        num/=10;
        num2=num*10+rem;
    }
    cout<<rem;
}
