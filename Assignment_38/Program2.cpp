// Write generic program to find largest number from three numbers.

#include<iostream>
using namespace std;

template <class T>

T Max(T no1,T no2,T no3)
{
    T max = no1;

    if(no2 > max)
    {
        max = no2;
    }
    if(no3 > max)
    {
        max = no3;
    }
    return max;
}

int main()
{
    int iRet = Max(10,20,30);
    cout<<"Integer Largest number is: "<<iRet<<"\n";

    float fRet = Max(10.00f,20.23f,30.64f);
    cout<<"Float Largest number is: "<<fRet<<"\n";

    return 0;
}