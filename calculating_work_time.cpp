/*
PROBLEM: In a company, an employee who works more than 480 minutes is said to be an overtime worker.  Write a C program which takes the entry and exit time (hour & minute) of each employee from keyboard until user enters a negative value for entry hour or minute. 

The program must print the total number of minutes at work for each employee. Finally, the program must print how many employees worked overtime and their average work time in minutes. If nobody worked overtime, then the program must display a proper message on screen.

*/

#include <iostream>
using namespace std;


int main() {
  int hour;
  int min;
  int eHour;
  int eMin;
  int count = 1;
  int total;
  int emp = 0;
  float sum = 0;
  


  cout<<"! Enter a NEGATIVE entry hour OR minute to FINISH program !"<<endl;

  while(hour > 0 || min > 0){
    cout<<"Enter entry hour&minute of "<<count<<". employee: ";
    cin>>hour>>min;

    if(hour < 0 || min < 0)
      break;

    cout<<"Enter his/her exit hour&minute: ";
    cin>>eHour>>eMin;
    hour = eHour - hour;
    min = eMin - min;
    total = min + 60 * hour;
    cout<<"=>Total time at work = "<<total<<" min"<<endl;
    if (total > 480){
      emp++;
      sum = total + sum;
    }

    count++;
  }

  cout<<"-------------------------------------------------"<<endl;

  if(emp == 0){
    cout<<"!!! NOBODY worked overtime !!!";
  }
  else {
    cout<<emp<<"employees worked overtime."<<endl;
    cout<<"Average work time of these employees = "<<sum/emp;
  }


  return 0;
} 