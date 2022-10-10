#include<iostream>
using namespace std;

class Queue
{
   int* arr;
   int front;
   int rear;
   int size;


   public:
      Queue(int s);
      int isempty();
      int isfull();
      void enqueue(int val);
      void dequeue();
      void display();
};