#include <bits/stdc++.h>

#define MAX 10
#define fori(n) for(int i=0;i<n;i++)
#define forj(n) for(int j=0;j<n;j++)
using namespace std;


typedef struct node
{
    int data;
    node *link;
}node;


typedef struct link
{
    link *pre;
    int data;
    link *next;
}link;


typedef struct treeNode
{
    int data;
    treeNode* left;
    treeNode* right;
}treeNode;
