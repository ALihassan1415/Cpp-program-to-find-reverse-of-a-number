#include<iostream>
using namespace std;
main()
{
	int reverse , rem;
	int n,i;
	cout<<"Enter the number : ";
	cin>>n;
	
	for(reverse=0;n!=0;n=n/10)
	{
		rem=n%10;
		reverse=rem+(reverse*10);
	}
	cout<<"The reverse number : "<<reverse;
}
