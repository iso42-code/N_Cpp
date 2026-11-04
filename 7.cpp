#include<iostream>
using namespace std;



int main()
    {
        int p,i,opt,t;
        cout<<"Enter ... "
            <<"\n Principal : ";
        cin>>p;
        cout<<"\n Interest : ";
        cin>>i;

        cout<<"\n 1.Monthly"
            <<"\n 2. Annual"
            <<"\n ==> ";
        cin>>opt;

        if(opt==1)
            {
                cout<<"Time period [Months] : ";
                cin>>t;
            }
        else
            {
                cout<<"Time period [Years] : ";
                cin>>t;
            }
        cout<<" Simple Interest == "
            <<(p*i*t)/100;
        
        return 0;
    }