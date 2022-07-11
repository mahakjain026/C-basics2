#include<iostream>
using namespace std;

string romannumberconvertor(int num){
    int number[]= {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string str[]={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};;

    string result="";
    for(int i=0;i<13;i++){
        while(num-number[i]>=0){
            result+=str[i];
            num-=number[i];
        }
    }
 
    return result;
    
}

int main(){
    int num;
    cout<<"enter the number = ";
    cin>>num;
    cout<<romannumberconvertor(num);
}