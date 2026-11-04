#include<iostream>
using namespace std;

int main()
    {
        float length ,breadth;

        cout<<"Enter ... \n #  Length => ";
        cin>>length;

        cout<<"\n #  Breadth => ";
        cin>>breadth;

        cout<<"\n 1 . Area == "
            <<length*breadth
            <<"\n 2. Perimeter == "
            << 2*(length + breadth);

        return 0;

    }