#include<iostream>
using namespace std;
int main(){
    float mark,test,quiz,project,assighment,final_Exam;
    quiz:
    cout<<"enter your quiz score out of 5%:"<<endl;
    cin>>quiz;
    if(quiz>5||quiz<0){
        cout<<"you have entered incorrect score"<<endl;
        goto quiz;
    }
    test:
    cout<<"enter your test score out of 15%:"<<endl;
    cin>>test;
    if(test>15||test<0){
        cout<<"you have entered incorrect score"<<endl;
        goto test;
    }
    project:
    cout<<"enter your project score out of 20%:"<<endl;
    cin>>project;
    if(project>20||project<0){
        cout<<"you have entered incorrect score"<<endl;
        goto project;
    }
    assighment:
    cout<<"enter your assighment score out of 10%:"<<endl;
    cin>>assighment;
    if(assighment>10||assighment<0){
        cout<<"you have entered incorrect score"<<endl;
        goto assighment;
    }
    final_Exam:
    cout<<"enter your final exam score out of 50%:"<<endl;
    cin>>final_Exam;
    if(final_Exam>50||final_Exam<0){
        cout<<"you have entered incorrect score"<<endl;
        goto final_Exam;
    }
    mark=quiz+test+project+assighment+final_Exam;
    if(mark>=90){
        cout<<"your grade is A+";
    }
     else if(mark>=80){
        cout<<"your grade is A";
    }
    else if(mark>=75){
        cout<<"your grade is B+";
    }
     else if(mark>=60){
        cout<<"your grade is C";
    }
    else if(mark>=55){
        cout<<"your grade is C+";
    }
    else if(mark>=45){
        cout<<"your grade is C";
    }
     else if(mark>=30){
        cout<<"your grade is D";
    }
    else{
        cout<<"your grade is F";
    }
        return 0;
}
