#include<iostream>
using namespace std;
int main(){
    float gross_Salary,worked_Hours,income_Tax,pension,net_Salary,overtime_Bonus_rate,over_time_payment,over_Time;
    gross_Salary:
    cout<<"enter the gross salary"<<endl;
    cin>>gross_Salary;
    if(gross_Salary<=0){
        cout<<"you have entered incorrect value"<<endl;
        goto gross_Salary;
        }
    
  pension =0.07*gross_Salary; 
    cout<<"enter the worked hours"<<endl;
    cin>>worked_Hours;
   if(worked_Hours>40){
        overtime_Bonus_rate:
        cout<<"enter an over-time bonus rate per hour"<<endl;
        cin>>overtime_Bonus_rate;
        over_Time=worked_Hours-40;
        over_time_payment=over_Time*overtime_Bonus_rate;
     { if(overtime_Bonus_rate<=0){
        cout<<"you have entered incorrect value"<<endl;
        goto overtime_Bonus_rate;  } } }   
if(gross_Salary<200){
            income_Tax=0;
        }
else if(gross_Salary>=200&&gross_Salary<600){
            income_Tax=0.1*gross_Salary;
        }
      else if(gross_Salary>=600&&gross_Salary<1200){
            income_Tax=0.15*gross_Salary;
        }
    else if(gross_Salary>=1200&&gross_Salary<2000){
            income_Tax=0.2*gross_Salary;
        }
     else if(gross_Salary>=2000&&gross_Salary<3500){
            income_Tax=0.25*gross_Salary;
        }
     else{
            income_Tax=0.3*gross_Salary;
            
        }
          net_Salary=gross_Salary-pension-income_Tax+over_time_payment;
   cout<<"your net salary is:"<<net_Salary; 

        return 0;
    }
