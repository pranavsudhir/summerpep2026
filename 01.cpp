#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    int no;
    cin>>no;
    if(age>=18 && no>10){
        cout<<"eligible";
    }
    else{
        cout<<"not eligibole";
    }
}