// Write generic program to accept N values from user and return smallest values.

#include<iostream>
using namespace std;

template <class T>

T Min(T *arr,int iSize)
{
    T min = arr[0];
    int i = 0;

    for(i = 0;i < iSize;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0f,3.7f,9.8f,8.7f};

    int iRet = Min(arr,5);
    cout<<"Integer smallest value is: "<<iRet<<"\n";

    float fRet = Min(brr,4);
    cout<<"Float smallest value is: "<<fRet<<"\n";

    return 0;
}