#include<iostream>
using namespace std;
int main(){
    char grade='A';
    switch(grade){
        case 'A':
        cout<<"excellent"<<endl;
        break;
        case 'B':
        cout<<"mid"<<endl;
        break;
        case'C':
        cout<<"bad"<<endl;
        break;
        default:
        cout<<"invalid";
    }
}