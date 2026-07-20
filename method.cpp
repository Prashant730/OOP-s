#include<iostream>
using namespace std;

class Method{
  public:
  // Method/function defined inside the class
    void greet(){
      cout<<"Hello World!";
    }
    void call();// Method/function declaration
};

// Method/function definition outside the class
void Method::call(){
  cout<<"calling...";
}

int main(){
  Method method;
  method.greet();
  method.call();
}