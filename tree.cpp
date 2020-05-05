#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right;
};
node* create()
{
    node *newnode=0;
    int x=0;
    newnode=new node();
    cout<<"\nenter the data -1 for not input the node\n";
    cin>>x;
    if(x==-1)
    {
        return 0;
    }
    else
    {
        newnode->data=x;
    }
    cout<<"\nenter the left part \n";
    newnode->left=create();
    cout<<"\nenter the right part \n";
    newnode->right=create();
    return newnode;
}
void preorder(node *head)
{
    if(head==0)
    {
        return;
    }
    cout<<head->data<<" ";
    preorder(head->left);
    preorder(head->right);
}
void postorder(node *head)
{
    if(head==0)
    {
        return;
    }
    postorder(head->left);
    postorder(head->right);
    cout<<head->data<<" ";

}
void inorder(node *head)
{
    if(head==0)
    {
        return;
    }
    inorder(head->left);
    cout<<head->data<<" ";
    inorder(head->right);


}

int main()
{
    node *root=0;
    root=create();
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);

    return 0;
}
