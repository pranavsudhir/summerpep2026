// #include<iostream>
// using namespace std;
// void doublenum(int num){
//     num *=2;
//     cout<<num;
// }
// int main(){
//     int num=10;
//     doublenum(num);
//     cout<<"outside func: "<<num;
// }
#include<iostream>
using namespace std;
void doublenum(int &num){
    num *=2;
    cout<<num<<endl;
}
int main(){
    int num=10;
    doublenum(num);
    cout<<"outside func: "<<num<<endl;
}