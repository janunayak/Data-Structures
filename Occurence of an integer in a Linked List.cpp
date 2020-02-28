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
int countdata(int x)
{
    int count=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==x)
        count++;
        temp=temp->next;
    }
    return count;
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

int main()
{
    Node* head=NULL;
    push(10);
    push(20);
    push(21);
    push(30);
    print();
    int x=countdata(20);
    cout<<x<<endl;
   // print();
    return 0;
}


