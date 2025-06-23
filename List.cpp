#include <iostream>
#include<list>
using namespace std;
int main(){
  list<int> l ;
  l.push_back(1);
  l.push_front(2);
  for(int i:l){
    cout<<"list is : "<<i<<endl;
  }
    l.erase(l.begin());
    l.pop_back();
    l.pop_front();
    l.empty();
    l.size();
  

}
