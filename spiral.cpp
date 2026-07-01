#include<iostream>
using namespace std;
void spiralprint(int arr[][3],int row,int col){
    int topr=0;
    int bottomr=row-1;
    int leftc=0;
    int rightc=col-1;
    while(topr<=bottomr && leftc<=rightc){
        for(int i=leftc;i<=rightc;i++){
            cout<<arr[topr][i]<<" ";
        }topr++;
        for(int i = topr; i <= bottomr; i++){
            cout << arr[i][rightc] << " ";
         }
        rightc--;
        if(topr <= bottomr) {
            for(int i = rightc; i >= leftc; i--) {
                cout << arr[bottomr][i] << " ";
            }
            bottomr--;
        }
        if(leftc <= rightc) {
            for(int i = bottomr; i >= topr; i--) {
                cout << arr[i][leftc] << " ";
            }
            leftc++;
        }
    }
}
int main() {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    spiralprint(arr, 3, 3);
}