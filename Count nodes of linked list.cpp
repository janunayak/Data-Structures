#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
Node* head;
void insert(int x)
{
    Node* newnode=new Node();
    newnode->data=x;
    newnode->next=NULL;
    if(x==1)
    {
        newnode->next=head;
        head=newnode;
        return;
    }
    Node* temp=head;
    for(int i=0;i<x-2;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return;
}
void print()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getcount()
{
    int count=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    cout<<count<<endl;
    
}
int main()
{
    Node* head=NULL;
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print();
    getcount();
    return 0;
}
