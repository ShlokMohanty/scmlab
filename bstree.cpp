#include<iostream>
using namespace std;
struct Node
{
	struct Node *leftchild;
	int data;
	struct Node *rightchild;
}
*root=NULL;
void insert (int key)
{
struct Node *t=root;    
struct Node *r=NULL,*p;        
if(root==NULL)    
{        
p=(struct Node *)malloc(sizeof(struct Node));        
p->data=key;        
p->lchild=p->rchild=NULL;        
root=p;        
return;
}
