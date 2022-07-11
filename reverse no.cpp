#include<iostream>
using namespace std;
int main(){
    int num,rem=0,digit;
    cin>>num;
    while(num!=0){
        digit=num%10;
        rem=(rem*10)+digit;
        num=num/10;
    }
    cout<<rem;
}