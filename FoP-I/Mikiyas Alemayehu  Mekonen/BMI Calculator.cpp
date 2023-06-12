#include<iostream>
using namespace std;
int main(){
    int num_of_people,n;
    cout<<"for how many people do you want to calculate the BMI"<<endl;
    cin>>num_of_people;
    for(n=0;n<num_of_people;n++)
    {float height,weight,BMI;
    char gender;
    height:
    cout<<"enter the height (in meter):"<<endl;
    cin>>height;
    if(height<=0){
        cout<<"you have inserted incorrect value"<<endl;
        goto height;
    }
   weight:
    cout<<"enter the weight (in killogram)"<<endl;
    cin>>weight;
     if(weight<=0){
        cout<<"you have inserted incorrect value"<<endl;
        goto weight;
    }
    gender:
    cout<<"enter the gender(M or F)"<<endl;
    cin>>gender;
      if(gender!='f'&& gender!='F'&& gender!='M'&&gender!='m'){
        cout<<"you have inserted incorrect value"<<endl;
        goto gender;
    }
    BMI=weight/(height*height);
    if(gender=='F'||gender=='f'){
        if(BMI<=25&&BMI>=20){
            cout<<"your BMI IS "<<BMI<<endl;
            cout<<"you have Healthy BMI ";}
        else if(BMI>25){
            cout<<"your BMI IS "<<BMI<<endl;
            cout<<"you should minimize your food ";
        }
        else{
            cout<<"your BMI IS "<<BMI<<endl;
            cout<<"you should eat more food ";
        }
    }
   if(gender=='M'||gender=='m'){
        if(BMI<=23&&BMI>=18){
            cout<<"your BMI IS "<<BMI<<endl;
            cout<<"you have Healthy BMI ";}
        else if(BMI>23){
            cout<<"your BMI IS "<<BMI<<endl;
            cout<<"you should minimize your food ";
        }
        else{
            cout<<"your BMI IS "<<BMI<<endl;
            cout<<"you should eat more food ";
        }
    } 
    cout<<endl;
    }
    return 0;
}
