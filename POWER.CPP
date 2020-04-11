#include <iostream>
using namespace std;
int pow;
void Power(int first,int pow)
{
    if (pow == 1)
    {
        cout<<first<<endl;
        cout<<"I don't know why you did that"<<endl;
    }
    else if(pow == 2)
    {
        cout<<first*first<<endl;
    }
    else if(pow == 3)
    {
        cout<<first*first*first<<endl;
    }
    else if(pow == 4)
    {
        cout<<first*first*first*first<<endl;
    }
    else if(pow == 5)
    {
        cout<<first*first*first*first*first<<endl;
    }
    else if(pow == 6)
    {
        cout<<first*first*first*first*first*first<<endl;
    }
    else if(pow == 7)
    {
        cout<<first*first*first*first*first*first*first<<endl;
    }
    else if(pow == 8)
    {
        cout<<first*first*first*first*first*first*first*first<<endl;
    }
    else if(pow == 9)
    {
        cout<<first*first*first*first*first*first*first*first*first<<endl;
    }
    else if(pow == 10)
    {
        cout<<first*first*first*first*first*first*first*first*first*first<<endl;
    }
    else
    {
        cout<<"\""<<pow<<"\" Is not a valid NUMBER"<<endl;
    }
}
