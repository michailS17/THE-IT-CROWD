#include <iostream>
using namespace std;
    // This is a BMI calculator for n number of people 
int main()
{
int i,n;
cout << "How many times do you want to use the BMI?"<<endl;
cin >> n;
for (i=0; i <n; i++)
{
    int h,w,BMI;
    char gen,M,F;
    cout << "Enter your height: "<<endl;
    cin >> h;
    cout << "Enter your weight: "<< endl;
    cin >> w;
    cout << "Enter your gender, M or F: ";
    cin >> gen;
    BMI = w/(h*h);
    if (gen =='M') 
    {
        if (BMI > 25 || BMI < 20 )
        {cout << "YOUR BMI IS "<< BMI << " YOU NEED TO EAT"<<endl;}
        else cout <<"YOUR BMI IS "<< BMI << " GOOD"<<endl;
    }    
    else if (gen == 'F')
    {
        if (BMI > 23 || BMI < 18)
        {cout << BMI <<"YOUR BMI IS "<< " YOU NEED TO FIX UP"<<endl;}
        else cout << "YOUR BMI IS "<<BMI << " Perfect"<<endl;   
    }
}
    return 0;
}

