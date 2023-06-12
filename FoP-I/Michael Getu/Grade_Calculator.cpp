#include<iostream>
using namespace std;
    /* A program that asks the student what subject, what scores they got on exams
     and calculate the grade they got. */
int main()
{
for (int i; i; i++)
    {
    int quiz,test,project,assignment,final_exam, grade;
    grade <=100;
   string subject;
   cout << "\t GRADE CALCULATOR"<<endl;
   cout << "Ente subject name"<<endl;
   cin >> subject;
   cout << "Enter your grade from 5%: ";
   cin >> quiz;
    for (int i=0; i<2; i++){
         if (quiz <0 || quiz > 5){
        cout << "Invalid input, please input your actual grade: "<<endl;
         cin >> quiz;
         while (i >2){
          exit(0);
         }
         }
         else if (quiz >=0 || quiz <=5; i<0){
        }
       }
    cout << "Enter your test result from 15%: ";
    cin >> test; 
    for (int i=0; i<3; i++){
        if (test <0 || test > 15){
        cout << "Invalid input, please input your actual grade: "<<endl;
        cin >> test;}
        else if (test >=0 || test <=15; i<1){
        }
      }
    cout << "Enter your mid_exam from 20%: ";
    cin >> project; 
    for (int i=0; i<3; i++){
        if (project <0 || project > 20){
        cout << "Invalid input, please input your actual grade: "<<endl;
        cin >> project;}
        else if (project >=0 || project <=20; i<1){
        }
      }
    cout << "Enter your mid_exam from 10%: ";
    cin >> assignment; 
    for (int i=0; i<3; i++){
        if (assignment <0 || assignment > 10){
        cout << "Invalid input, please input your actual grade: "<<endl;
        cin >> assignment;}
        else if (assignment >=0 || assignment <=10; i<1){
        }
      }
    cout << "Enter your final result from 50%: ";
    cin >> final_exam; 
    for (int i=0; i<3; i++){
        if (final_exam <0 || final_exam > 50){
        cout << "Invalid input, please input your actual grade: "<<endl;
        cin >> final_exam;}
        else if (final_exam >=0 || final_exam <=50; i<0){
        }
      } 
    grade = quiz + test + project + assignment +final_exam;
    cout << subject << " Grade: ";
    if (grade >=90)
        {
            cout << "You got an A+, your grade is " <<grade<<endl;
        }
    else if (grade >=80)
        {
            cout << "You got an A, your grade is " <<grade<<endl;
        }
    else if (grade >=75)
        {
            cout << "You got B+, your grade is " <<grade<<endl;
        }
    else if (grade >=60)
        {
            cout <<"You got a B, your grade is " <<grade<<endl;
        }
    else if (grade >=55)
        {
            cout << "You got a C+, your grade is " <<grade<<endl;
        }
    else if (grade >=45)
        {
            cout << "You got a C, your grade is " <<grade<<endl;
        }
    else if (grade >=30)
        {
            cout << "You got a D, your grade is " <<grade<<endl;
        }
    else 
        {
            cout << " Thats an F, your grade is " <<grade<<endl;
        }
    }
}
