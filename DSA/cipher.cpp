//encipher text

#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ch;
	int n,i,a,b;
	char out;
	char alpha[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cout<<" enter the char input ";
    cin>>ch;
    
    
    ch=tolower(ch);
    
    
    cout<<" enter the no input ";
    cin>>n;
    for(i=0;i<=26;i++)
    {
    	if(ch==alpha[i])
    		a=i;
    		
	}
    b=a+n;
    cout<<alpha[b];
    
    
}
