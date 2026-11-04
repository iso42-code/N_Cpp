#include<iostream>
using namespace std;

void iseven(int a)
	{ 
		if(a%2 == 0)
			{
				cout<<"\n Even \n";
	 		}
	 	else 
	 		{
	 			cout<<"\n ODD \n";
	 		}
	 }
int main()
	 {
		int p;
		cout<<"Enter Integer : ";
 		cin>> p;

 		iseven(p);
 
 		return 0;
 	}
 
