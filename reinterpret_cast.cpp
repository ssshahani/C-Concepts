

#include <iostream>
using namespace std;

// Theis statement does packing, removes any padding bytes
#pragma pack(1)

//It can perform dangerous conversions - it can typecast any pointer to any other type
class Banana{
  public:
  void eatingBanana(){
      cout << "Eating Banana" <<endl;
  }  
};

class Mango{
  void eatingMango(){
      cout << "Eating Mango" <<endl;
  }  
};

struct s_rnd{
    int i;
    char c1;
    char c2;
    bool b;
};

typedef s_rnd rnd;
int main(){
    Banana* ban = new Banana();
    Mango* man = new Mango();
    Banana* b = reinterpret_cast<Banana*>(&man);
    
    b->eatingBanana();
  
  // Example 2
  rnd r;
  r.i = 5;
  r.c1 = 'a';
  r.c2 = 'b';
  r.b = true;
  
  cout<<sizeof(r)<<endl;
  
  int* p = reinterpret_cast<int*>(&r);
  cout << *p <<endl;
  p++;
  char * c= reinterpret_cast<char*>(p);
  cout<< *c << endl;
  cout << *(++c) <<endl;

  return 0;
}