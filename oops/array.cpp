#include "array.h"
Array::Array()
{
    this->size = 0;
}
Array::Array(int size)
{
    this->size = size;
    this->arr = new int[size];
}
void Array:: input()
{
    for (int i = 0; i < this->size; i++)
    {
        cin>>this->arr[i];
    }
}
// Array Array:: add(Array ob)
// {
//     Array res(this->size);
//     for(int i = 0; i < this->size; i++)
//     {
//         res.arr[i] = this->arr[i]+ob.arr[i];
//     }
//     return res; 
// }
// void Array:: display()
// {
//     for (int i = 0; i < this->size; i++)
//     {
//         cout<<this->arr[i]<<" ";
//     }
// }
ostream& operator<<(ostream& out, const Array ob)
{
    for (int i = 0; i < ob.size; i++)
    {
       out<<ob.arr[i]<<" ";
    }
    return out;
}
Array Array:: operator+(Array ob)
{
    Array res(this->size);
    for(int i = 0; i < this->size; i++)
    {
        res.arr[i] = this->arr[i]+ob.arr[i];
    }
    return res;
}