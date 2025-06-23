//algos//
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(0);
  v.push_back(1);
  v.push_back(2);
  v.push_back(9);
  cout<<binary_search(v.begin(), v.end(), 9)<<endl;// output is 1 that indicates true in the vector and 0 indicates false//

  cout<<"lower bound"<<lower_bound(v.begin(),v.end(),9)-v.begin()<<endl;
  // upper_bound()

  int a = 3;
  int b = 5;

cout<<max(a,b)<<endl;
cout<<min(a,b)<<endl;
swap(a,b);
cout<<a<<endl;
string g = "abcd";
reverse(g.begin(),g.end())
;  
cout<<g<<endl;

rotate(v.begin(),v.begin()+1, v.end());

sort(v.begin(),v.end());
  

}
