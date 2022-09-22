#include<iostream>
using namespace std;
class linkedlist;
class Node
{
    int data;
    Node* next;
    public:
    Node();
    Node(int value);  
    friend linkedlist;
    
};
class linkedlist
{
    Node* head;
    public:
    linkedlist();
    void append(int value);
    void display();
};