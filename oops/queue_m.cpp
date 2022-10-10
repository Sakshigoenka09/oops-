#include"queue.h"
int main()
{
    Queue line(6);
    line.enqueue(1);
    line.enqueue(2);
    line.enqueue(3);
    line.enqueue(4);
    line.enqueue(5);
    line.enqueue(6);
    line.dequeue();
    line.enqueue(8);
    line.display();
    return 0;
}