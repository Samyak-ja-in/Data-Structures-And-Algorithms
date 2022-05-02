#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *left,*right;
};
void preorder(struct node *root)
{
 if(root==0)
 return;
 cout<<"\n"<<root->data;
 preorder(root->left);
 preorder(root->right);
}
void inorder(struct node *root)
{
 if(root==0)
 return;
 inorder(root->left);
 cout<<"\n"<<root->data;
 inorder(root->right);
}
void postorder(struct node *root)
{
 if(root==0)
 return;
 postorder(root->left);
 postorder(root->right);
 cout<<"\n"<<root->data;
}


struct node* createnode()
{
 int x;
struct node *newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  cout<<"\n enter data enter -1 for no node";
  cin>>x;
  if(x==-1)
  return 0;
  newnode->data=x;
  cout<<"\n enter left child of"<<x;
  newnode->left=createnode();
  cout<<"\n enter right child of"<<x;
  newnode->right=createnode();
  return(newnode);
}

void main()
{
 struct node *root=0;
 root=createnode();
 cout<<"\n Preorder traversel is";
 preorder(root);
 cout<<"\n Inorder traversal is";
 inorder(root);
 cout<<"\n postorder traversel is";
 postorder(root);
 getch();
}


