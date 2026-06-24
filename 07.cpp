#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec1={1,2,3,4,5};
    cout<<vec1[3]<<endl;
    cout<<vec1.at(3)<<endl;
    vec1.push_back(10);
    vec1.pop_back();
    for(int i:vec1){
        cout<<i<<" ";
    }
}