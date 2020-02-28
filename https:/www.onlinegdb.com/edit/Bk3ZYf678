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
void insert(int data,int n)
{
  Node* temp1=new Node();
  temp1->data=data;
  temp1->next=NULL;
  if(n==1)
  {
      temp1->next=head;
      head=temp1;
      return;
  }
  Node* temp2=head;
  for(int i=0;i<n-2;i++)
  {
      temp2=temp2->next;
      
  }
  temp2->next=temp1->next;
  temp2->next=temp1;
}
void print()
{
   Node* temp=head;
   while(temp!=NULL)
   {
       cout<<temp->data<<" ";
       temp=temp->next;
   }
   //cout<<endl;
}
int main()
{
    head=NULL;
    insert(2,1);
    insert(10,2);
    insert(4,3);
    insert(10,4);
    insert(5,5);
    print();
    return 0;
    
}
https://www.onlinegdb.com/edit/Bk3ZYf678
