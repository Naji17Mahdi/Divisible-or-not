#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	int a , b;
	cout<<"Please enter number a:"<<endl;
	cin>>a;
	cout<<"Please enter number b:"<<endl;
	cin>>b;
	
	
	cout<<'\n';
	
	
	if ( a == 0 )
	{
		cout<<"The result is zero";
	}
	else if ( b == 0)
	{
		cout<<"Please enter another number. Not possible to accept 0.";
	}
	else if ( a % b ==0 )
	{
		cout<<"They are bakhshpazir.";
	}
	else 
	{
		cout<<"They are not bakhshpazir.";
	}
}
