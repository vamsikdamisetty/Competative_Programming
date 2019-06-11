#include<iostream>
using namespace std;

int friends(int n)
{
	//base
	if(n==0 or n==1) return 1;
	if(n==2 ) return 2;
	
	return friends(n-1) + ((n-1)*friends(n-2)); 
} 

int main()
{
	int n,t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	cin>>n;
	cout<<friends(n)<<endl;
	}
	return 0;
}
