#include "ll.h"
using namespace std;
int main()
{
    linkedlist ll;
    Node n1(50);

    for (int i = 0; i < 8; i++)
    {
        ll.append(i*i);
    }

    ll.display();
    
    return 0;

}