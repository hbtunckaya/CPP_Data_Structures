#include <iostream>
#include <iomanip>
#include <queue>
#include <stack>
#include <string>
#include <list>

//#define N 100;

using namespace std;
int main() {

  int i=0;
  int j=100;
  int size;

  queue<char> myQue;
  stack<char> myStack;
  

  char website[100];

  cout<<"Enter a web site name: ";
  cin>>website;

  //size = website.size();

  cout<<"Reverse the web site name: ";

  while(website[i] != '\0'){
    myQue.push(website[i]);
    i++;
  }

  while(!myQue.empty()){
    myStack.push(myQue.front());
    myQue.pop();
  }

  while(!myStack.empty()){
    myQue.push(myStack.top());
    myStack.pop();
  }

  while(!myQue.empty()){
    cout<<myQue.front();
    myQue.pop();
  }



  return 0;
} 