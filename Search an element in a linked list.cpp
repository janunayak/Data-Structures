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
void push(int newdata)
{
    Node* newnode=new Node();
    newnode->data=newdata;
    newnode->next=head;
    head=newnode;
    
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
bool search(int x)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==x)
        return true;
        temp=temp->next;
    }
    return false;
}
int main()
{
    Node* head=NULL;
    int x=21;
    push(10);
    push(20);
    push(21);
    push(30);
    print();
    search(21)?cout<<"yes":cout<<"no";
    return 0;
}

