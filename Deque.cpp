#include <iostream>
#include <deque>
using namespace std;
int main(){

  deque<int> d ;
  d.push_back(1);
  d.push_front(3);

  cout<< d.size()<<endl;
  cout<<d.at(0)<<endl; 
  cout<<d.front()<<endl;
  cout<<d.back()<<endl;
  d.pop_back();
  d.pop_front(); 
  d.empty();
  d.erase(d.begin(),d.begin()+1);// we have to specify a range in the function
}