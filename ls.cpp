// // #include<iostream>
// // using namespace std;

// // bool linearsearch(int arr[], int size, int key){
// //     for(int i = 0; i < size; i++){
// //         if(arr[i] == key){
// //             return true;
// //         }
// //     }
// //     return false;
// // }
// // int main(){
// //     int size;
// //     cin >> size;
// //     int arr[size];
// //     for(int i = 0; i < size; i++){
// //         cin >> arr[i];
// //     }
// //     int key;
// //     cin >> key;
// //     if(linearsearch(arr, size, key)){
// //         cout << "found";
// //     }
// //     else{
// //         cout << "not found";
// //     }
// //     return 0;
// // }



// #include<iostream>
// using namespace std;
// bool binarysearch(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
//     while(start<=end){
//         int mid=(start+end)/2;
//         if(arr[mid]==key){
//             return true;
//         }else if(arr[mid]<key){
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return false;
// }

// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     if(binarysearch(arr,size,key)){
//         cout<<"found";
//     }
//     else{
//         cout<<"not found";
//     }
// }








#include<iostream>
using namespace std;
bool binarysearch(int arr[], int left, int right, int key) {
    if (left > right)
        return false;
    int mid = (left + right) / 2;
    if (arr[mid] == key)
        return true;
    else if (arr[mid] < key) {
        return binarysearch(arr, mid + 1, right, key);
    } else {
        return binarysearch(arr, left, mid - 1, key);
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int key = 40;

    if (binarysearch(arr, 0, n - 1, key))
        cout << "Found";
    else
        cout << "Not Found";
}