#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"-----"<<*arr<<endl;
    int *ptr;
    ptr = &arr[0];
    for(int i=0;i<n;i++){
        cout<<*ptr<<" ";
        ptr++;

    }
}