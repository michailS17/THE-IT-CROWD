#include<iostream>
using namespace std;
    // A program that calculates the net income of a person.
int main()
{
for (int i; i<10; i++)
{
    int gross_salary, work_hour, pension, tax_rate,overtime_bonusrate,overtime_pay,extra_hours,net_salary;
    cout << "What is your gross salary: "<<endl;
    cin >> gross_salary;
    cout << "How much hours do you work: "<<endl;
    cin >> work_hour;
    cout << "What is your Tax rate: "<<endl;
    cin >> tax_rate;
    if (work_hour > 40)
    {
        cout << "Enter your overtime bonus rate: "<<endl;
        cin >> overtime_bonusrate;
    }
    extra_hours = work_hour - 40;
    overtime_pay = extra_hours * overtime_bonusrate;
    if (net_salary <=200){
        tax_rate = net_salary*0/100;
    }
    else if (net_salary >=200 && net_salary <=600){
        tax_rate = net_salary*10/100;
    }
    else if (net_salary >=600 && net_salary <=1200){
        tax_rate = net_salary*15/100;
    }
    else if (net_salary >=1200 && net_salary <=2000){
        tax_rate = net_salary*20/100;
    }
    else if (net_salary>=2000 && net_salary <= 3500){
        tax_rate = net_salary*25/100;
    }
    else {
        tax_rate = net_salary*30/100;
    }
    pension = gross_salary*7/100;
    net_salary = (gross_salary - pension - tax_rate) + overtime_pay;
    cout << "Your net salary is "<< net_salary << endl;
}
}
