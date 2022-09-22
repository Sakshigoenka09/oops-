#include<iostream>//istream+ostream
using namespace std;
class Array
{
    int* arr;
    int size;
    public:
        Array();
        Array(int size);
        void input();
        Array add(Array ob);
        void display();
        friend ostream& operator<<(ostream& out, const Array ob); 
        Array operator+(Array ob);
};