#include<bits/stdc++.h>
#define ll long long int
#define f(i,e) for(ll i = 0; i < e; i++)
using namespace std;


class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left=right=NULL;
    }
};

void linebyline(node* root){
    if(root==NULL) return;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        int n= q.size();
        for(int i=0; i<n; i++){
            node* curr=q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }cout<<endl;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   
node* root = new node(10);
root->left = new node(30);
root->right= new node(40);
root->left->left = new node(50);
root->left->left->left = new node(100);
root->left->right = new node(20);
root->right->right = new node(90);
root->right->right->right = new node(80);
linebyline(root); cout<<endl;
}
return 0;
}

/*         (Input)
      10
     /  \
    30   40
   / \     \
  50 20    90
  /         \
 100         80
*/