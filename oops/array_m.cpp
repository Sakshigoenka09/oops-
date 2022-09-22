#include "array.h"
int main()
{
    Array ob(5);
    Array ob1(5);
    ob.input();
    ob1.input();
    //Array res = ob.add(ob1);
    Array res = ob + ob1;
    cout<<"resultant array\n";
    // res.display();
    cout<<res;
    return 0;
}