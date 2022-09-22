#include "ll.h"
Node::Node()
{
    this->next=NULL;
}
Node::Node(int value)
{
    this->next=NULL;
    this->data=value;
}
linkedlist::linkedlist()
{
    this->head=NULL;
}
void linkedlist::append(int data)
{
    Node* temp=new Node(data);
    Node* current=head;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=temp;
}
void linkedlist::display()
{
    Node* current=head;
    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}