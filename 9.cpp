#include<iostream>
using namespace std;

int main()
    {
        int a;
        cout<<"Enter a integer : ";
        cin>>a;
        cout<<"\n The table"
            <<a
            << "from  1 to 10 is ....\n";

        for(int i =1 ;i<=10;i++)
            {
                cout<<i
                    <<" x "
                    <<a
                    <<" = "
                    <<i*a
                    <<"\n";
            }
        
        return 0;
    }