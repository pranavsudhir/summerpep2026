#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        
            if(arr[mid]==key){
                cout<<mid;
                return 0;
            }else if(arr[mid]<key){
                left=mid+1;
            }else{
                right=mid-1;
            }
    }
    cout<<-1;
}