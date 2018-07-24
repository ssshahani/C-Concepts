#include <stdio.h>
#include <iostream>
#include <exception>

// SYNTAX: dynamic_cast <new_type>( expression )
// Dynamic_cast checks run time type checking - to find out correct down-casting 
// There needsd to a virtual function in Base Class. Otherwise Error: Source is not poymorphic
// If cast is successful, dynamic_cast returns the new type
// If the cast is unsuccessful and new_type is pointer, then null_ptr is Returned
// If the cast is unsuccessful and new_type is reference, then bas_cast exception is Returned
// Dynamic cast is usually avoided as it is a heavy operation.

using namespace std;
class Base{
    public:
        virtual void print() { cout << "Base" <<endl; }
};

class Derived1 : public Base{
    public:
        void print() { cout << "Derived 1" <<endl; }
};

class Derived2 : public Base{
    public:
        void print() { cout << "Derived 2" <<endl; }
};

int main()
{
  Derived1 d1;
  
  Base *bp1 = dynamic_cast<Base*>(&d1);
  bp1->print();
  
  Derived2 *d2 = dynamic_cast<Derived2*>(&d1);
  if(d2 == NULL)
    cout << "Null Returned" <<endl;
  else
    cout << "Not Null Returned" <<endl;
  
  try{
    //Derived1& r1 = dynamic_cast<Derived1>(&d1);      
    Derived2& r2 = dynamic_cast<Derived2&>(d1);      
  }
  catch(exception &e){
      cout << e.what() <<endl;
  }
  return 0;
}
