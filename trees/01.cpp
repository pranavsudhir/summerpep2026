#include<iostream>
using namespace std;
class Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        left=NULL;
        right=NULL;
        data=val;
    }
};
void levelorder(Node* root){
    if(root==NULL)return 0;
    queue<int> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* frontNode=q.front();
        q.pop();
        if(frontNode!=NULL){
            cot<<frontNode->data<<" ";
            if(frontNode->left)q.push(frontNode->left);
            if(frontNode->right)q.push(frontNode->right);
        }else if(q.empty()){
            q.push(NULL);
        }
    }
}
int main(){

}