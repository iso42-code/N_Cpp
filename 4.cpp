#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a ;
    

    cout<<"Enter Integer : ";
    cin>> a;

    string str = to_string(a);  //type casting :-  int => string

    int lens = ( str.size() ) - 1;

    cout<<"\n Reverse Order is : ";

//    for(int i = lens; i =0 ; i--)
//         {
//             cout<<str[i];
//         }

    while(lens >= 0)
        {
            cout<<str[lens];
            lens=lens-1;
        }

 
 return 0;
 }