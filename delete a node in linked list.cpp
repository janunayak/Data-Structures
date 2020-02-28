#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
Node* head;//global variable
void insert(int x)
{
    Node* temp=new Node();
    temp->data=x;
    if(head!=NULL)
    temp->next=head;
    head=temp;
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
void rem(int n)
{
    Node* temp1=head;
    if(n==1)
    {
        head=temp1->next;
        delete(temp1);
        return;
    }
    for(int i=0;i<n-2;i++)
    temp1=temp1->next;
    Node* temp2=temp1->next;
    temp1->next=temp2->next;
    delete(temp2);
}
int main()
{
    Node* head=NULL;
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    print();
    int n;
    std::cout<<"enter the position:";
    cin>>n;
    rem(n);
    print();
}


