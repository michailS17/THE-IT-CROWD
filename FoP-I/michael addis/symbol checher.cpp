#include<iostream>
using namespace std;

int main()
{
cout<<"enter symbol:";
char a;
cin>>a;

if(a>='A' && a<='Z')
  
    if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    cout<<"is upper voule";
    else
    cout<<"upper consolant";  

else if(a>='a' && a<='z')
    if(a=='a' || a=='e' || a=='e' || a=='o' || a=='u')
    cout<<"is lower vouble";
    else
    cout<<"is lower consolant";

else if(a<='9' && a>='0')
     if(a%2==2)
     cout<<"even";
else
     cout<<"odd";     
    
else
 cout<<"panctuation";     
}
