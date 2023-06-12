#include <iostream>
using namespace std;
    // BMI calculator for unknown number of people.
int main()
{
    for (int i=0; ; i++)
{
    int w,h,BMI;
    char gender;
    cout << "Enter your gender, M or F: ";
    cin >> gender;
    cout << "Enter your hight: ";
    cin >> h;
    cout << "Enter your weight: ";
    cin >> w;
    BMI = w/(h*h);
    cout << BMI<<" ";

    // Method 1:
    switch (gender)
    {
        case 'M':
        (BMI>25 || BMI<20) ? cout << "workout dude.\t"<<endl : cout << "Goodhshape man"<<endl;
        break;
        case 'F':
        (BMI>23 || BMI < 18) ? cout << "Workout lady."<<endl : cout << "Goodshape women"<<endl;
        break;
    }
    // Method 2:
    switch (gender)
    {   
       case 'M':
       if (BMI > 25 || BMI < 20 ) 
       {cout << "Get to work man"<<endl;}
       else cout <<  "looking good."<<endl;
       break;
       case 'F':
       if (BMI > 23 || BMI < 18 )
       {cout << "Get to work lady"<<endl;}
       else cout << "Good shape"<<endl;
       break;
    } 
}
}
