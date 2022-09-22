#include "stack.h"
int main()
{
    Stack st;
    st.init(7);
    for(int i=1;i<7;i++)
    {
        st.push(i+10);
    }
    st.display();
    st.push(20);
    int temp = st.pop();
    if(temp != -99999)
        cout<<"The poped item is "<<temp<<endl;
    st.display();
    return 0;
}