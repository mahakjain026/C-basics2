#include<iostream>
using namespace std;

float mean(int arr[] , int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    float result=(float)sum/n;
    return result; 
}
 
int median(int arr[] , int n){
    int c=n/2;
    int result = (arr[c]+arr[c+1])/2;
    return result;
}

int mode(int arr[] ,int n){
    int maxcount=0;
    int index=-1;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(count>maxcount){
                maxcount=count;
                index=i;
            }
        }
    }
    return arr[index];
}

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the value of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"mean : "<<mean(arr , n)<<endl;
    cout<<"median : "<<median(arr , n)<<endl;
    cout<<"mode : "<<mode(arr, n)<<endl;
}

