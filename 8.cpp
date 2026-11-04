#include<iostream>
using namespace std;



int main()
    {
        float num1,num2,num3;
        float great;

        cout<<"Enter three Numbers : ";
        cin>>num1>>num2>>num3;

        if(num1 > num2)
            {
                great=num1;
            }
        else
            {
                great=num2;
            }
        if(num3>great)
            {
                great=num3;
            }
        
        cout<<"Largest Numbers is  "
            <<great;



        return 0;
    }