#include <iostream>
#include<set>
using namespace std;
int main(){

  set<int> s = {1,2,4,5,6,6,7};
  cout<<"size of set is : "<<s.size(); // always unique values//
  int n = s.size();
   s.insert(6); // Olog(n)//
   s.erase(s.begin());// deletes the firsty element // if begin +1 then will delete at index 1 
   s.find(5);// will return the index of the element //
   
   

  



}