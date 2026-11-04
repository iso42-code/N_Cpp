#include<iostream>
using namespace std;

int main()
{
    int a , sum =0;
    cout<<"Enter Positive Integer : ";
    cin>>a;

    if (a > 0)
    {
        for(int i=0; i<= a ;i++)
            {
                sum+=i;
            }
        cout<<"\n The Sum is "
            << sum;


    }
 
 return 0;
 }