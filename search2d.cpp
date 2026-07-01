#include<iostream>
using namespace std;
bool ispresent(int arr[][3],int target,int row,int col){
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }  
    return false;
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
   cout<<ispresent(arr,4,3,3);
}