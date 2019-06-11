//#include<iostream>
//using namespace std;
//void subseq(char s[],int n,int i,char h[],int c)
//{
//	if(i == n)
//	{
//		for(int x=0 ; x<c; x++)
//			cout<<h[x]<<ends;
//			cout<<endl;
//	}
//	else
//	{
//		h[c] = s[i];
//		c++;
//		subseq(s,n,i+1,h,c);
//		c--;
//		subseq(s,n,i+1,h,c);
//	}
//}
//int main()
//{
//	char s[5] = "vam";
//	char h[4];
//	int c=0;
//	subseq(s,3,0,h,c);
//}

#include<iostream>
using namespace std;

void subseq(string str,string osf)
{
	//BASE
	if(str.size() == 0)
	{
		if(osf!="")
		cout<<osf<<endl;
		else
		cout<<"Empty";
		return;
	}
	//Assumption
	char ch = str[0]; // FIrst char
	string ros = str.substr(1);
	//Self work
	subseq(ros,osf + ch);
	subseq(ros,osf);
	
}

int main()
{
	string str;
	cin>>str;
	subseq(str,"");
	return 0;
}
