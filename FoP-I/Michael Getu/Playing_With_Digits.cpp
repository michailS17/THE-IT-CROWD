#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int a,b,c,d,i,digit=0,fact,m,input;
    char letter;
    cout << "\t Playing with Digit";
    cout << "Enter a  letter from (a/A) to (k/K): ";
    cin >> letter;
    letter = tolower(letter);
    switch (letter) {
        case 'a':
        {
cout<<"A Program which displays the reverse of a number"<<endl;
cout << "Enter the number: ";
cin>>input;
a=input;

a=input;

    while (a>0){
        b=a%10;
        cout<<b;
        a=a/10;
    }

        }
        break;
        case 'b':
        {
cout<<"Number of digits of a number counter"<<endl;
cout << "Enter the number: ";
cin>>input;
a=input;
while (a>0) {
    a=a/10;
    digit++;
}
cout<<"It has "<<digit<<" digits";
        }
        break;
        case 'c':
        {
cout<<"A program which finds the sum of digits of a number."<<endl;
cout << "Enter the number: ";
cin>>input;
a=input;
c=0;
while(a>0) {
    b=a%10;
    c=c+b;
    a=a/10;
}    cout<<c;
}
        break;
        case 'd':
        {
cout<<"Program which finds the product of even digits with in a number."<<endl;
cout << "Enter the number: ";
cin>>input;
a=input;
c=1;
while (a>0){
    b=a%10;
    if (b==0){
        goto kk;
        }
    if(b%2==0){
        c=b*c;
    }
  kk:  a/=10;
} 
if (c!=1){
    cout<<c;
}  
else {
    cout<<"0";}
        }
        break;
        case 'e':
        {
        cout<<"Program which uses the first and last digits of a number and finds there sum"<<endl;
        cout << "Enter the number: ";
        cin>>input;
      a=input;
      b=a%10;
      c=b;
      while (a>0) {
        b=a%10;
        if(a<=9){
            d=a;
        }
        a/=10;
      }
      cout<<"The first digit is "<<d<< " and the last digit is "<<c<<endl<<"The sum of these two numbers is "<<c+d;
        }
        break;
        case 'f':
        {
        cout<<"Program which swaps the first and last digits of a number."<<endl;
        cout << "Enter the number: ";
        cin>>input;
      a=input;
      b=a%10;
      c=b;
      while (a>0) {
        b=a%10;
        if(a<=9){
            d=a;
        }
        a/=10;
      }
     a=input;
    while (a>0) {
        a=a/10;
        digit++;
    }
        --digit;
    a = d * (pow(10, digit));
        b = input % a;
        input = b / 10;
    c = c * (pow(10, digit)) + (input * 10 + d);
    cout << " The swapped number(output) is" << c << endl;
        }        
        break;
        case 'g':
        {
    cout<<"Program which checks if a program is Palindrom or not."<<endl;
    cout << "Enter the number: ";
    cin>>input;
     a=input;
     digit=0;
     while(a>0){
        digit++;
        a/=10;
     } 
        c=0;
        a=input;
        d=digit-1;
     while(a>0){
        b=a%10;
     if(b==0 && d==0){
            b=a;
            }
      
        c=c+b*(pow(10,d));
        d--;
        a/=10;
     } 
     cout<<"The Reversed number is "<<c<<endl;
     if(c==input){
        cout<<input<<" is a palindrom number";
     } else {cout<<input<<" isn't a palindrom number";}
        }
        break;
        case 'h':
        {
    cout<<"Program which finds the frequency of each digit"<<endl;
    cout << "Enter the number: ";
    cin>>input;
     
     for (i=0;i<=10;i++){
        
        a=input;
        digit=0;;
        while (a>0){
            b=a%10;
            if(b==i){
                digit++;
                c=b;
            }
            a/=10;
        } if(digit!=0){
            cout<<"The frequency is "<<c<<" in "<<input<<" is "<<digit<<endl;}
     }
        }
        case 'i':
        {
cout<<"Program which checks if a number is Armstrong or not"<<endl;
cout << "Enter the number: ";
cin>>input;
a=input;
while (a>0){
    a/=10;
    digit++;
} 
a=input;
c=0;
    while (a>0){
        b=a%10;
        c=c+pow(b,digit);
        a/=10;
    }
    if (c==input){
        cout<<input<<" is an Armstrong number";
    } else {cout<<input<<" isn't an Armstrong number";}         
        }
        break;
        case 'j':
        {
        cout<<"Program which checks if a number is strong or not."<<endl;
        cin>>input;
    a=input;
    while (a>0){
        digit++;
        a/=10;
    }       
        a=input;
        c=1;
        i=0;
    while (a>0){
        b=a%10;
        c=1;
    for(fact=1;fact<=b;fact++){
        c=c*fact;
         i=i+c;
        a/=10;
    } 
    if (i==input){
        cout<<input<<" is a strong number";
    } 
    else{cout<<input<< " isn't a strong number";}
 
        }
        }
        break;
        case 'k': 
        {
    cout<<"Program which checks if a number is perfect or not"<<endl;
    cout << "Enter the number: ";
    cin>>input;
    c=0;
    for(m=1;m<=(input/2);m++){
        a=input%m;
        if(a==0){
            c=c+m;
        }
    } 
    if(c==input){
        cout<<input<<" is a perfect number";
    }
    else
    {
        cout<<input<<" isn't a perfect number";
    }
        }
        break;
        default:
        cout << "Enter a valid letter.";
        break;

}
return 0;
}
