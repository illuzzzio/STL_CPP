// stack is last in first out//
#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack<string> s;

  s.push("love");
  s.push("babbar");
  s.push("pranjal");
  s.pop(); // removes pranjal//

  cout<<"top element is : "<<s.top()<<endl; // last element is at top//

  cout<<"size of stack: "<<s.size()<<endl;
  cout<<s.empty();
  

}