// #include<iostream>
// using namespace std;
// void sum(int arr[][3],int row,int col){
//     int maxsum=0;
//     int ind=0;
//     for(int i=0;i<row;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//         // cout<<sum<<endl; 
//         if(sum>=maxsum){
//             maxsum=sum;
//             ind=i;
//         }
//     }
//       cout<<ind<<" "<<maxsum;
// }
// int main(){
//     int arr[3][3]={1,2,3,1,2,3,0,1,2};
//     sum(arr,3,3);
// }


#include<iostream>
using namespace std;

void op(int arr[][4], int row, int col) {
    int sum = 0;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
    }

    cout << sum;
}

int main() {
    int arr[4][4] = {
        {6, 8, 10, 2},
        {14, 1, 13, 15},
        {5, 1, 9, 3},
        {12, 16, 4, 7}
    };
    cout << "Wave Traversal: ";
    for(int c = 0; c < 4; c++) {
        if(c % 2 == 0) {
            for(int r = 0; r < 4; r++) {
                cout << arr[r][c] << " ";
            }
        } else {
            for(int r = 3; r >= 0; r--) {
                cout << arr[r][c] << " ";
            }
        }
    }
    op(arr, 4, 4);
    return 0;
}