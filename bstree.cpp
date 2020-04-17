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
	
