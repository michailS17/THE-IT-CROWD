#include<iostream>
using namespace std;

int main() {
    int num, gross_salary, work_hour, pension, tax_rate,overtime_bonusrate,overtime_pay,extra_hours,net_salary;
    cout << "\t Income Calculator"<<endl;
    cout << "To Calculate the Income of 1 person, Enter (1)"<<endl;
    cout << "To Calculate the Income of known number of people, Enter (2)"<<endl;
    cout << "To calculate the Income of unknown number of people, Enter (3)"<<endl;
    cout << "To Stop Calculating Income, enter (0)"<<endl;
    cin >> num;
    switch (num) {
        case 1:
        {
    cout << "\n What is your gross salary: "<<endl;
    cin >> gross_salary;
    cout << "\n How much hours do you work: "<<endl;
    cin >> work_hour;
    if (work_hour > 40){
        cout << "\n Enter your overtime bonus rate: "<<endl;
        cin >> overtime_bonusrate;
    }   
    extra_hours = work_hour - 40;
    overtime_pay = extra_hours * overtime_bonusrate;
    pension = gross_salary*7/100;
    net_salary = (gross_salary)+overtime_pay;
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
    net_salary = net_salary - tax_rate - pension;
    if (net_salary>0){
    cout << "Your net salary is "<< net_salary << endl;
    }
    else {
        cout <<"Error input";
    }
        }
        break;
        case 2:
        {
    cout << "Enter the  number of times you want to calculate the Net Income: ";
    int count;
    cin >> count;
    for (int i=0; i<count; i++) {
    cout << "\n What is your gross salary: "<<endl;
    cin >> gross_salary;
    cout << "\n How much hours do you work: "<<endl;
    cin >> work_hour;
    if (work_hour > 40){
        cout << "\n Enter your overtime bonus rate: "<<endl;
        cin >> overtime_bonusrate;
    }   
    extra_hours = work_hour - 40;
    overtime_pay = extra_hours * overtime_bonusrate;
    pension = gross_salary*7/100;
    net_salary = (gross_salary)+overtime_pay;
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
    net_salary = net_salary - tax_rate - pension;
    if (net_salary>0){
    cout << "Your net salary is "<< net_salary << endl;
    }
    else {
        cout <<"Error input";
    }
}
        }
        break;
        case 3:
        {
            for (int i=0; ; i++)
{
    cout << "\n What is your gross salary: "<<endl;
    cin >> gross_salary;
    cout << "\n How much hours do you work: "<<endl;
    cin >> work_hour;
    if (work_hour > 40){
        cout << "\n Enter your overtime bonus rate: "<<endl;
        cin >> overtime_bonusrate;
    }   
    extra_hours = work_hour - 40;
    overtime_pay = extra_hours * overtime_bonusrate;
    pension = gross_salary*7/100;
    net_salary = (gross_salary)+overtime_pay;
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
    net_salary = net_salary - tax_rate - pension;
    if (net_salary>0){
    cout << "Your net salary is "<< net_salary << endl;
    }
    else {
        cout <<"Error input";
    }
}
        }
        break;
        case 0:
        break;
    }
}
