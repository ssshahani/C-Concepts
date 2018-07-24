//const_cast<T>(expresssion)

//const_cast is used to change the const or volatile qualifier of a pointer/reference
#include <iostream>
using namespace std;

int main(){
    
    //Invalid Code
    const int a1 = 10;
    const int* b1 = &a1;
    int *ptr_b1 = const_cast<int*>(b1);
    *ptr_b1 = 15; 
    
    cout << a1 <<endl;
    
    //Valid Code
    int a2 = 10;
    const int* b2 = &a2;
    int *ptr_b2 = const_cast<int*>(b2);
    *ptr_b2 = 20;
    
    cout << a2 <<endl;
    
    return 0;
}