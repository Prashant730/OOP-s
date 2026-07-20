// pass values to methods

#include<iostream>
using namespace std;

class Main{
  public:
  void greet(string name){
    cout<<"Hello "<<name<<"!"<<endl;
  }
};

int main(){
  string name = "Prashant";
  Main obj;
  obj.greet(name);
}