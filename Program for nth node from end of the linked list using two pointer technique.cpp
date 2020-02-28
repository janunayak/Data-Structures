#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
Node* head;
int nthnode(int n)
{
    Node* fast=head;
    Node* slow=head;
    for(int i=0;i<n;i++)
    {
        if(fast==NULL)
        return -1;
        fast=fast->next;
    }
    while(fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    cout<<slow->data;
}
void push(int data)
{
    Node* newnode=new Node();
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}
int main()
{
    Node* head=NULL;
    push(2);
    push(3);
    push(4);
    push(5);
    nthnode(4);
    return 0;
}
