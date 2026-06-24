#include<iostream>
using namespace std;
void func1(int a){
    cout<<"value of num is: "<<a<<endl;
}
int func2(int nom){
    int ans=2*nom;
    return ans;
}
int main(){
    func1(19);
   cout<< func2(50);
}