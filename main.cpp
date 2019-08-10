#include <iostream>
#include <typeinfo>

using namespace std;

class HumanBeing {

private:
  int Age;
  string Name;

public:

  //set user name and age
 void setName() {
   Name = "";
 }
 void setAge() {
   Age = 0;
 }

  // get user name and age
  void getInfo() {
    cout << "Please enter your age. ";
    cin >> Age;
  
    cout << "Please enter your name. ";
    cin >> Name;
  }

  // display user name and age
  void display() {
    cout << "\nHello, I am a human being" << endl;
    cout << "My age is " << Age << endl;
    cout << "My name is " << Name << endl;
  }

};

int main()
{

  HumanBeing fred;


  fred.setName();
  fred.setAge();
  fred.getInfo();
  fred.display();

  return 0;

}
