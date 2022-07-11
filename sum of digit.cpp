#include<iostream>
using namespace std;
int main(){
    int num,sum=0,digit;
    cin>>num;
    while(num!=0){
        digit=num%10;
        num=num/10;
        sum+=digit;
    }
    cout<<sum;
}