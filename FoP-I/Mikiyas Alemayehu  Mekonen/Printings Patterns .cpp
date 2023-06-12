#include<iostream>
using namespace std;
int main(){
/*a)write an application to print out the numbers 10 through 49 in 4 rows and 10 column
 starting from 10 to 49 consecutively in row*/
for(int i=10;i<=40;i=i+10)
{
{
    for(int j=i;j<=i+9;j++)
    cout<<j<<" ";
}
cout<<endl<<endl;
}
//5. a)a 4 row by 7 matrix using * symbol

for(int i=1;i<=4;i++)
{
for(int j=1;j<=7;j++)
{
     cout<<"*"<<" ";
}
cout<<endl<<endl;
}

//b) recatngle using * symbol
for(int i=1;i<=7;i++)
{
    if(i==1 || i==7)
{
    for(int j=1;j<=8;j++)
    cout<<"*"<<" ";
}
else
{
    for(int j=1;j<=8;j++)
 {if(j==1 || j==8)
  cout<<"*"<<" ";
else
cout<<"  ";
 }
}
cout<<endl<<endl;
}
//c)Half pyramid in using(*)

cout<<"               Half pyramid "<<endl;
 for(int i=1;i<=6;i++)
{
for(int j=1;j<=i;j++)
{
     cout<<"*"<<" ";
}
cout<<endl<<endl;
}
// d) inverted half pyramid  * symbol
cout<<"              inverted Half pyramid "<<endl;
for(int i=1;i<=6;i++)
{
for(int j=i;j<=6;j++)
{
     cout<<"*"<<" ";
}
cout<<endl<<endl;
}
//e)hollow inverted half pyramid  * symbol
cout<<"       Hollow inverted Half pyramid "<<endl;
int h=0;
for(int i=0; i<6;i++)
    cout<<"* ";
for(int i=6;i>=1;--i)
    {
        for(int j=0;j<6-i;++j){
        while(h!=(2*i-1))
        {
            if(h==0 || h== 2*i-2)
                cout<<"*";
            else
                cout<< " " ;
            h++;
        }
        }
       h=0;
       cout<<endl<<endl;
    }
// (f) full pyramid using  * symbol
cout<<"                     full pyramid       "<<endl;
for(int i=0; i<6;i++)
{
    for(int space=1;space<=6-i;space++)

        cout<<"  ";
     for(int j=0;j<=i;j++)
    {
       cout<<"*"<< "  ";
    }
    cout<<endl;
}

//g)  inverted pyramid using  * symbol */
cout<<"          inverted full pyramid       "<<endl;
 for(int i=0; i<6;i++)
{
    for(int space=0;space<=i;space++)
         cout<<"  ";
     for(int j=1;j<=6-i;j++)
    {
       cout<<" *"<< "  ";
    }
    cout<<endl;
}
//h)   hollow inverted pyramid using  * symbol
 cout<<"    Hollow inverted Half pyramid       "<<endl;
  for(int i=1; i<=6;i++)
{
    for(int j=1;j<=(20-i);j++)
       {
     cout<<" ";
       }
       if(i==1||i==6)
       {
           for(int j=1;j<=i;j++)
           {
               cout<<"* ";
           }
       }
       else
       {
           cout<<"*";
           for(int j=1; j<=2*i-3; j++)
           {
               cout<<" ";
           }
            cout<<"*";
       }
cout<<endl;
}

//i) to print from 1 to 5 consecutively in 5 row by 5 column matrix
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
  cout<<j<<" ";
}
cout<<endl;
}
//j) 
for(int i=1;i<=5;i++)
{
for(int j=1;j<=i;j++)
{
  cout<<j<<" ";
}
cout<<endl;
}
//k)
 
for(int i=1;i<=5;i++)
{
for(int j=i;j<=5;j++)
{
  cout<<"  ";
}
for(int j=i;j>=1;j--)
{
  cout<<j<<" ";
}
cout<<endl;
}
//l)

for(int i=1;i<=5;i++)
{
for(char j='a';j<='e';j++)
{
  cout<<j<<" ";
}
cout<<endl;
}

//m)
for(char i='A';i<='X';i=i+6)
{
for(char j=i ;j<=i+6;j++)
{
  cout<<j<<" ";
}
cout<<endl;
}
// n)
for(char i='A';i<='E';i++)
{
for(char j='A' ;j<=i;j++)
{
  cout<<j<<" ";
}
cout<<endl<<endl;
}
/*5.c)update your program in 5.a) to allow user to input the dimension of the pattern.*/
cout<<"printing  pattern with numbers for n number of rows and columns"   <<endl;
int rows , columns;
cout<<"enter the number of rows : ";
cin>>rows;
cout<<"enter the number of columns : ";
cin>>columns;
rows=rows*10;
for(int i=10;i<=rows;i=i+10)
{
for(int j=i ;j<=i+columns;j++)
{
  cout<<j<<" ";
}
cout<<endl;
}




 return 0;
}
