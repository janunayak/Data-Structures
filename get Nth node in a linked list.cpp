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
void push(int newdata)
{
    Node* newnode=new Node();
    if(head==NULL)
    {
        head=newnode;
    }
    newnode->data=newdata;
    newnode->next=head;
    head=newnode;
}
  
int getNode(int index)
{
    Node *current=head;
    int count=0;
    while(current!=NULL)
    {
        if(count==index)
            return current->data;
        count++;
        current=current->next;
    }
    assert(0); /* if we get to this line,  
    the caller was asking  
    for a non-existent element  
    so we assert fail */
    
}
int main()
{
    Node* head=NULL;
    push(20);
    push(25);
    push(30);
    push(40);
    cout<<getNode(0);
    return 0;
}

