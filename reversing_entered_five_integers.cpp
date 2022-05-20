#include <iostream>
#include <stack>
#include <ctime>
#include <iomanip>


using namespace std;

int main() {

  stack <int> s;

  //srand(time(NULL));

  int i;
  int num;

  cout<<"Enter 5 integers: ";
  for(i=0; i<5; i++){ 
    cin>>num;
    s.push(num);
  }

  for(i=0; i<5; i++){
    cout<<s.top()<<setw(5);
    s.pop();
  }



  return 0;
} 