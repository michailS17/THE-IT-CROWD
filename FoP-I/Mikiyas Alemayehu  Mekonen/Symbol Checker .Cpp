#include<iostream>
using namespace std;
int main(){
    char symbol;
  cout<<"enter any symbol from the keyboard"<<endl;
  cin>>symbol;
  if (symbol>='A' && symbol<='Z')
  {
    if(symbol=='A'|| symbol=='E'|| symbol=='I' || symbol== 'O' || symbol== 'U')
        cout<<"you have entered uppercase vowel letter"<<endl;
   else
        cout<<"you have entered uppercase consonant letter"<<endl;
  }
  else if (symbol>='a' && symbol <= 'z')
  {
    if(symbol=='a'|| symbol=='e'|| symbol =='i' || symbol== 'o' || symbol== 'u')
        cout<<"you have entered lowercase vowel letter"<<endl;
    else
        cout<<"you have entered lowercase consonant letter"<<endl;
  }
  else if (symbol>='0' && symbol<='9')
  {
    if(symbol%2==0)
    cout<<"you have entered an even number"<<endl;
    else
    cout<<"you have entered an odd number"<<endl;
  }

 else{
    cout<<"you have entered a special character symbol"<<endl;
    }
   return o;
}
