#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int *ptr,digit,rem=0;
    ptr=&n;
    // cout<<*ptr<<"   "<<ptr;

    while(*ptr!=0){
        digit=*ptr % 10;
        rem=(rem*10)+digit;
        *ptr/=10;
    }
    cout<<"reverse number is : "<<rem;
}