#include<iostream>
#include<math.h>
using namespace std;
int main(){
//a) print the reverse of number
int number,digit;
cout<<" \n enter a number: ";
cin>>number;
while(number!=0)
{
    digit=number%10;
    cout<<digit;
    number/=10;
}
//b) to count the number of digits in a given number
int num,no_Digit=0;
cout<<" \n enter an intger: ";
cin>>num;
while(num!=0){
num/=10;
no_Digit++;
}
cout<<" thnumber of digits: "<<no_Digit<<endl;
//c) find the sum of the digits of the given number
int NUMBER,DIGIT,sum=0;
cout<<"\n enter a number: "<<endl;
cin>>NUMBER;
while(NUMBER!=0)
{
 DIGIT=NUMBER%10;
 sum+=DIGIT;
 NUMBER/=10;
}
cout<<"the sum of the numbers in the digit is: "<<sum<<endl;
//d) the product of even digits of the given number
int num1,num2,r,pro=1,i;
cout<<" \n input a number: ";
cin>>num1;
num2=num1;
for(i=num1;i>0;i=i/10)
{
    r=i%10;
    if(r%2==0)
        pro=pro*r;
}
cout<<"the product of even  digits of "<<num2<<" is: "<<pro<<endl;
//e)print the first and the last digit of the number entered and find their sum
int n,sum_of_Digit=0;
cout<<" \n enter a number : ";
cin>>n;
int firstdigit=n;
while(firstdigit>=10)
{
    firstdigit/=10;
}
int lastdigit=n%10;
sum_of_Digit=firstdigit+lastdigit;
cout<<"the first digit of the number is: "<<firstdigit<<endl;
cout<<"the last digit of the number is: "<<lastdigit<<endl;
cout<<"the sum of the first and the las digit is:"<<sum_of_Digit<<endl;
//f)swap the firs and the last digit of a number
int nn,num11,first, last,digits,a,b;
cout<<"input any  two digit number: ";
cin>>num11;
digits=(int)log10(num11);
first=num11/pow(10,digits);
last=num11%10;
a=first*(pow(10,digits));
b=num11%a;
num11=b/10;
nn=last*(pow(10,digits))+(num11*10+first);
cout<<"the number after Swaping the first and last digits are : "<<nn<<endl;
//G)to check a number is palindrome or not
int N;
cout<<"\n enter a number : ";
cin>>N;
int first_digit=N;
while(first_digit>=10)
{
    first_digit/=10;
}
int last_digit=N%10;
if (last_digit==first_digit)
cout<<N<<" : is a Palindrome number "<<endl;
else{
cout<<N<<" : is not a Palindrome number "<<endl;
}
//h) to find the frequency of digit and print it in tabular format
int N_,ctr,R;
    cout<<"\n input any number : ";
    cin>>N_;
    cout<< "Digit" <<"\t\t"<<"Frequency"<<endl;
    for(int i=0;i<10;i++)
        {
            cout<<i<<"...................";
            ctr=0;
            for(int j=N_;j>0;j=j/10)
            {
                R=j%10;
                if(R==i)
                {
                    ctr++;
                }
            }
            cout<<ctr<<endl;
        }
//i) to check the number is armstrong or not
int NUM, originalNum, remainder, n_ = 0;
    float result = 0.0;
   cout << " \n Enter a three-digit integer: ";
    cin >> NUM;
    originalNum = NUM;
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n_;
    }
    originalNum = NUM;
   while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n_);
        originalNum /= 10;
    }
   if (result == NUM){
        cout << NUM << " is an Armstrong number.";
   }
        else{
        cout << NUM << " is not an Armstrong number.";
        }
//j)  check the number is storng or not
int  n1,s1= 0;
    long fact;
    cout << " \n Enter a number: ";
    cin >> n1;
  for(int j=1;j>0;j=j/10)
  {
      fact=1;
      for(int i=1;i<=j%10;i++)
      {
          fact=fact*i;
      }
      s1=s1+fact;
  }
    if (n1 == s1){
        cout << n1 << " is not Strong number.";
    }
    else{
        cout << n1 << " is a Strong number.";
    }

//k) to check whether the number is perfect number or not
int num_1, SUM = 0;
    cout << "\n Enter a number: ";
    cin >> num_1;
    for (int i = 1; i < num_1; i++)
    {
        if (num_1 % i == 0)
            SUM += i;
    }
    if (SUM == num_1)
        cout << num_1 << " is a perfect number";
    else
        cout << num_1 << " is not a perfect number";
return 0;
}       
