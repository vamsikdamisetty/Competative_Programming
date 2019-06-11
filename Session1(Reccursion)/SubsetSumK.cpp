#include<iostream>
#include <vector>
using namespace std;


void subset(int a[], int k,string osf,int sum)
{
	
	//BASE
    int size = sizeof(a)/sizeof(2);
	if(size == 0)
	{
		if(osf!="" and sum == k)
		{
		    cout<<osf<<endl;
            return;
		}
		
	}
	
	//Assumption
	int x = a[0]; // FIrst char
	//Self work
	char ch = x+48;
	subset(a+1,k,osf + ch,sum + a[0]);
	subset(a+1,k,osf,sum);
	
}

int main()
{
	
	int n,k;
	cin>>n;
	int a[n];
	for(int i =0; i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	subset(a,k,"",0);
	return 0;
}
