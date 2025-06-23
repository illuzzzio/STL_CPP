#include<iostream>
#include<queue>

//first in first out//
using namespace std;
int main(){

  queue<string> q;

  q.push("love");
  q.push("babbar");
  q.push("kumar");

  cout<<q.front(); // love//
  q.pop();// will remove the first element//
  q.size();

}