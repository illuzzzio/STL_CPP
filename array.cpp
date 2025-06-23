#include <iostream>
#include <array>
using namespace std;
int main(){
  // int array[5] = {1,2,3,4,5};
  array<int,6> a = {1,2,3,4,5,6};
  int size = a.size();
  for(int i =0;i<size;i++){
    cout<<a[i]<<endl;
  
  }
    cout<<"the number at the second index is"<<a.at(2);

    cout<<a.empty()<<endl; // to check empty or not//

    // for first element we use //

    cout<<"the first element is :  "<<a.front()<<endl;
    // a.erase(a.begin());// // no erae in array//

    //for the last element in the array//

    cout<<"the last element is : "<<a.back()<<endl;


}
