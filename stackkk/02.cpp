#include<iostream>
#include<stack>
using namespace std;
void reversestring(string str){
    stack<str> st;
    for(int i=0;i<str.lenth();i++){
        string ans="";
        while(str[i]!=" "&& i<str.length()){
            ans+=str[i];
            i++;
        }
        st.push(ans);
    }
    while(!st.empty){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){

}