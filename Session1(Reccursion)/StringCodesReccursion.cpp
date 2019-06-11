//IN the compiler
#include<iostream>
#include<string>
using namespace std;

void convert(string str , string osf , char *arr)
{
    if(str.size()==0)
    {
        cout<<osf<<endl;
        return;
    }
    int one = str[0] - '0';
    int two = 0;
    if(str.size() >= 2){
        two = stoi(str.substr(0,2));
        
        convert(str.substr(1),osf + arr[one] , arr);
        if(two <= 26){
            convert(str.substr(2),osf + arr[two] , arr);
        }
    } else {
        convert(str.substr(1),osf + arr[one] , arr);
    }
    
}


int main() {
    string str;
    char arr[27] = {'#','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cin>>str;
    convert(str,"",arr);
	return 0;
}
