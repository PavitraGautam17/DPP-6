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

int height(node* root, int &res){
    if(root==NULL) return 0;
    int lh = height(root->left, res);
    int rh = height(root->right, res);
    int temp = max(lh,rh)+1;
    int ans = lh+rh+1;
    res = max(res,ans);
    return temp;
}


int sizeoftree(node* root){
    if(root==NULL) return 0;
    else
    return (sizeoftree(root->left)+sizeoftree(root->right)+1);
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
root->left->right->right = new node(25);
root->left->right->right->right = new node(27);
root->right->right = new node(90);
root->right->right->right = new node(80);
root->right->right->right->right = new node(85);

int res = INT_MIN;

cout<<"Height :- "<<height(root,res)<<"\n";
cout<<"Diameter :- "<<res<<"\n";
cout<<"Size of the tree :- "<<sizeoftree(root)<<"\n";
}
return 0;
}
/*         (Input)
      10      ----       level 0
     /  \ 
    30   40    ----      level 1
   / \     \
  50 20    90   ----     level 2
  /   \      \
 100   25     80   ----   level 3
        \      \
         27     85   ----  level 4
*/