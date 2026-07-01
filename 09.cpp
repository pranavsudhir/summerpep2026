// #include<iostream>
// using namespace std;
// void mthod()

// int main(){
//     int arr[3][4];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//              cin >> arr[i][j];
          
//         }
//     }for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 4; j++) {
//             if(i % 2 == 0) {
//                 cout << arr[i][j] << " ";
//             }
//         }
//         cout << endl;
//     }
// }


#include<iostream>
using namespace std;

void mthod(int arr[3][4]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int arr[3][4];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    mthod(arr);
    return 0;
}