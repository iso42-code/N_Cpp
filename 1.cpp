#include<iostream>
using namespace std;

int main()
	{
        float c, result;
        cout<<"Enter the Temperature in Celcius : ";
        cin>>c;

        result = ((c * 9)/5)+32;
        result *= 1.0 ;

        cout<<"\n Result : "<<result;
        return 0;
	}



