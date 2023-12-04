#include<stdio.h>
#include<stdlib.h>
struct BTreeNode
{
	int val[MAX+1],count;
	struct BTreeNode*link[MAX+1];
};
struct BTreeNode*root;
struct BTreeNode*createNode(int val,struct BTree*child)
{
	BTreeNode*newNode;
	newNode=(struct NTreeNode*)malloc(size of (structBTreeNode));
	newNode->val[1]=;
	newNode->count=1;
	newNode->link[0]=root;
	newNode->link[1]=child;
	return newNode;
}
void insertNode(int val,int pos,struct BTreeNode *node,pos,struct BTreeNode *child)
{	
	int j=node->count;
	while (j>pos)
