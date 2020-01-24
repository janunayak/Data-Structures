#include<iostream>
using namespace std;
template<typename T>
class List{
    public:
    const T & operator[](unsigned index);
    void insertAtFront(const T & data);
    
    private:
    //public:
    class ListNode
    {
        public:
        const T & data;
        ListNode *next;
        ListNode(const T & data):data(data),next(nullptr)
        {
            
        }
    };
    ListNode *head; // head pointer for our list
    };
    template<typename T>
    const T & List<T>::operator[](unsigned index)
    {
        ListNode *thru=head; // start a 'thru' pointer to advance thru the list
        while(index>0 && thru->next!=nullptr)   // loop until the end of the list or untill a 'nullptr'
        {
            thru=thru->next;
            index--;
        }
        return thru->data;   // return the data
    }
    template <typename T>
    void List<T>::insertAtFront(const T & data)
    {
        //create a new listnode on the head
        ListNode *node=new ListNode(data);
        
        // set the new nodes next pointer point the current head of the list 
        node->next=head;
        // set the list head pointer to be the new node
        head=node;
    }
    int main()

{
    List<int> list;
    std::cout<<"inserting element 3 at front ..."<<std::endl;
    list.insertAtFront(3);
    std::cout<<"list[0]"<<list[0]<<std::endl;
    std::cout<<"inserting element 30 at front..."<<std::endl;
    list.insertAtFront(30);
    std::cout<<"list[0]:"<<list[0]<<std::endl;
    std::cout<<"list[1]:"<<list[1]<<std::endl;
    return 0;
}    
