#include"queue.h"

Queue::Queue(int s)
{

    this->size = s;
    this->rear = -1;
    this->front = -1;
    arr = new int[s];
}

int Queue::isempty()
{
    if(this->front -this->rear == 1)
    {
        this->front = -1;
        this->rear = -1;
    }

    if(this->front == -1 && this->rear == -1)
        return 1;
    else
        return 0;    
}

int Queue::isfull()
{
    if(this->rear == this->size-1 )
        return 1;
    else
        return 0;
}
void Queue::enqueue(int val)
{
   if(isfull())
    {
        cout<<"Line is empty"<<endl;
        return ;
    }
    if(isempty())
    {
        this->front++;
        this->rear++;
        this->arr[this->rear] = val;
    }
    else
    {
        this->arr[++this->rear] = val;
    }
}
void Queue::dequeue()
{
    if(isempty())
    {
        cout<<"Queue is empty"<<endl;
        return;

    }
    else
    {
        int x = this->arr[this->front];
        this->front++;
        cout<<"deleted item is "<<x<<endl;
    }
}
void Queue::display()
{
    for(int i=this->front;i<=this->rear;i++)
    {
        cout<<this->arr[i]<<" ";
    }
    cout<<endl;
}
