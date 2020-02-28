include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
Node* head;
int countNodesinLoop()
{
    int counter=1,flag=0;
    Node* slow,*fast;
    slow=fast=head;
    while(slow&& fast&& fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            slow=slow->next;
            flag=1;
            break;
        }
    }
    while(slow!=fast&& flag)
    {
        slow=slow->next;
        counter++;
    }
    if(slow==fast)
    {
        return counter;
    }
    else
    {
        return 0;
    }
}
Node* insert(int data)
{
    Node* newnode=new Node();
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}
/*void print()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}*/
int main()
{
    Node *head =insert(1);  
    head->next = insert(2);  
    head->next->next =insert(3);  
    head->next->next->next =insert(4);  
    head->next->next->next->next =insert(5);  
  
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next;  
    //print();
  
    cout << countNodesinLoop()<< endl;  
  
    return 0; 
}
