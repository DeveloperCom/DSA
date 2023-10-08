
#include<iostream>
using namespace std;
int main()
{
    long long int a=0,b=1,next;
    for(int i=0;a<=100000;i++)
    {
        cout<<a<<endl;
        next=b;
        b=a+b;
        a=next;
    }

}

