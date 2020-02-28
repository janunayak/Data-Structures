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
int printListele(int n)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    if(len<n)
    return -1;
    temp=head;
    for(int i=1;i<len-n+1;i++)
        temp=temp->next;
        cout<<temp->data;
        //return head;
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
    printListele(4);
    return 0;
}
