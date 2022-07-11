#include<iostream>
using namespace std;

struct student{
    string studentName;
    int studentRollno;
    int studentId;
    int studentAge;

};
int main(){
int n;
cout<<"enter the no. of student : ";
cin>>n;
student s[n];
for(int i=0;i<n;i++){
    cout<<"enter the name of student : ";
    cin>>s[i].studentName;
    cout<<"enter the roll number of student : ";
    cin>>s[i].studentRollno;
    cout<<"enter the value of student Id : ";
    cin>>s[i].studentId;
    cout<<"enter the value age : ";
    cin>>s[i].studentAge;
}

    int r;
    cout<<"enter the rollno. of student whose information you want : ";
    cin>>r;
    for(int i=0;i<n;i++){
        if(s[i].studentRollno==r){
            cout<<"Name = "<<s[i].studentName<<endl;
            cout<<"Id = "<<s[i].studentId<<endl;
            cout<<"Age = "<<s[i].studentAge;
        }
    }
}