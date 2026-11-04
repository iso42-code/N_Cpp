#include<iostream>
using namespace std;

float a , b ;
int opt;

void inp_option()
    {
        cout<<"\n\n----- Calculator -----\n"
            <<"\n 1. Addition "
            <<"\n 2. Substraction"
            <<"\n 3. Multiplication"
            <<"\n 4. Division "
            <<"\n 5.Exit";
        cout<<"\n Select Operation => ";

        cin>>opt;
    }

void inp_num()
    {
        cout<<"\n Enter Number 1 : ";
        cin>>a;

        cout<<"\n Enter Number 2 : ";
        cin>>b;
    }
 
int main()
    {

        do{

            inp_option();

            if(opt == 5)
                {
                    cout<<"\n Quitting Program ...";
                    break;
                }
            else
                {

                    switch (opt)
                    {
                    case 1:
                        inp_num();
                        cout<<"\n Addition == "
                            << a + b;
                        break;
                    
                    case 2:
                        inp_num();
                        cout<<"\n Substraction == "
                            << a - b;
                        break;
                    
                    case 3:
                        inp_num();
                        cout<<"\n Multiplication == "
                            << a * b;
                        break;
                    
                    case 4:
                        inp_num();
                        
                        if(b==0)
                            {
                                cout<<"\n Input Error... Can't be  divided by zero ";
                            }
                        else
                            {
                                cout<<" Division == "
                                    << a / b;
                            }
                        break;   
                    
                    default:
                        
                        cout<<"\n Enter Valid input..."
                            <<"\n  (Input must  be between 1 to 5)";
                        break;
                    }
                }
        }while(opt);

    return 0;

    }