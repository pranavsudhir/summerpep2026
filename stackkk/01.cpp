#include<iostream>
using namespace std;
class mystack{
    public:
    int *arr;
    int top;
    int size;
    mystack(int size){
       this->size=size;
       arr=new int(size);
       top=-1; 
    }
    void push(int val){
        if(top==size-1){
            cout<<"Stack overflow niga"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }
};

int main(){

}