#include <iostream>
#include <vector>
using namespace std;
int main(){

  //vectors basically doubles their capacity//

  vector<int> v;
  cout<<"size is : "<<v.capacity(); // to check the size of vector//
  v.push_back(1); // pushed an element at the back//
  v.push_back(2);
  v.push_back(3);

  cout<<"size is : "<<v.capacity()<<endl;
  cout<<v.at(2);  // output == 3 , as we pushed from back//

  cout<<"front : "<<v.front()<<endl;
  cout<<"back : "<<v.back()<<endl;

  //popping -- removes last index element from the array//
  v.pop_back();
  cout<<"last element is  "<<v.back();
  v.clear(); // clear the size i.e 0 //
  v.erase(v.begin());



}