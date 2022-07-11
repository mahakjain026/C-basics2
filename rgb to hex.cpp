#include<iostream>
using namespace std;

string hexcode(int n){
    char decimal[2];
    int i=0;
    while(n!=0){
        int temp=0;
        temp=n%16;
        if(temp < 10){
            decimal[i] = temp + 48;
            i++;
        }
        else{
            decimal[i]=temp+55;
            i++;
        }
        n/=16;     
    }
    string hex="";
    if(i==2){
        hex.push_back(decimal[1]);
        hex.push_back(decimal[0]);
    }
    else if(i==1){
        hex="0";
        hex.push_back(decimal[0]);
    }
    else{
        hex="00";
    }
    return hex;
}

string rgbtohex(int r , int b , int g){

if(r>=0 && r<=255){
    if(g>=0 && g<=255){
        if(b>=0 && b<=255){
            string hex="#";
            hex+=hexcode(r);
            hex+=hexcode(g);
            hex+=hexcode(b);
            return hex;
        }
        else{
            return "-1";
        }
    }
}
}

int main(){
    int r,g,b;
    cout<<"enter the value of r , g and b : ";
    cin>>r>>g>>b;
    cout<<rgbtohex(r,b,g);

}