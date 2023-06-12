#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "\t BMI Calculator"<<endl;
    cout << "To Calculate the Bmi of 1 person, Enter (1)"<<endl;
    cout << "To Calculate the BMI of known number of people, Enter (2)"<<endl;
    cout << "To calculate the BMI of unknown number of people, Enter (3)"<<endl;
    cout << "To Stop Calculating BMI, enter (0)"<<endl;
    cin >> num;
    switch(num) {
        case 1:
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
        break;
        case 2:
        {
    cout << "Enter the number of people you want to calculate BMI for: ";
    int nu;
    cin >> nu;
    for (int i=0; i <nu; i++) {
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
        }
        case 3:
        {
    for (int i=0; ; i++) {
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
    // switch (gender)
    // {   
    //    case 'M':
    //    if (BMI > 25 || BMI < 20 ) 
    //    {cout << "Get to work man"<<endl;}
    //    else cout <<  "looking good."<<endl;
    //    break;
    //    case 'F':
    //    if (BMI > 23 || BMI < 18 )
    //    {cout << "Get to work lady"<<endl;}
    //    else cout << "Good shape"<<endl;
    //    break;
    // } 
    }
    }
    break;
    case 0:
    break;
}
return 0;
}
