#include"stack.h"

Stack::Stack()
{
    this->top=-1;
    this->size=0;
}

void Stack::init(int end)
{
    this->top=-1;
    this->size=end;
    arr=new int(end);
}

void Stack::push(int value)
{
    if(this->top == size-1)
    {
        cout << "stack overflow" << endl;
        return; 
    }
    arr[++(this->top)]=value;
}

int Stack::pop()
{
    if(top == -1)
    {
        cout << "stack underflow" << endl;
        return -99999;
        int temp = this->arr[this->top];
        this->top--;
        return temp;
    }
}  

void Stack::display()
{
    if(this->top == -1)
    {
        cout << "stack underflow" << " ";
        return ;
    }
    for(int i=0;i<=this->top;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
    

