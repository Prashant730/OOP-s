#include<iostream>
using namespace std;

// Create a Car class with some attributes
class Main{
public:
  int id;
  int num;
  string name;
};

int main(){
Main student;// Create an object
student.name="prashant";
student.num=10;
student.id = 1;

cout<<"id: "<<student.id<<endl;
cout<<"Roll no: "<<student.num<<endl;
cout<<"Name: "<<student.name<<endl;
cout<<endl;

Main student1;
student1.name="ronak";
student1.num=40;
student1.id=2;


cout<<"id: "<<student1.id<<endl;
cout<<"Roll no: "<<student1.num<<endl;
cout<<"Name: "<<student1.name<<endl;
cout<<endl;

return 0;
}