//5-6 points - why to use static_cast

//It performs implicit conversion between types
// int to float, float to int , char to int, int to char

#include <iostream>
#include <string>
using namespace std;

//Example 1
int main(){
	float f = 3.5;
	int a;

	a = f;

	//explicit message to the compiler that a conversion is done. It will happen at compile-time
	a = static_cast<int>(f);
	return 0;
}

//Example 2
class Base{
	int x;
public:

	Base(int _x = 0) : x(_x) {
		cout <<"Conversion Constructor" <<endl;
	}


	operator string(){
		cout << " conversion operator" <<endl;
		return to_string(x);
	}
};
int main(){
	Base b(10);

	//calls conversion operator
	string s = b;
	// calls conversion constructor
	b = 20;
	// Again giving compiler explicit message to do cast rather than using conversion operator and conversion constructor
	s = static_cast<string>(b);

	b = static_cast<Base>(20);
}


//Example 3
//Static Cast wont allow casting between char to int*

int main(){
	// C- Style Cast
	char c; // 1 byte
	int * p = (int *)&c; //4 byte
	*p = 5; // Actual Object was 1 byte, now after casting it points to 4 bytes
			// and would be stored in just 1 byte, remaining 3 bytes would be memory waste

	// C++ forbuids this
	//int *p = static_cast<int *>(&c);
	return 0;
}


//Example 4:

// Up Cast from Derived to Base
class Base{};

class Derived : public Base {};

int main(){
	Derived d;

	Base* bp1 = static_cast<Base*>(&d);
	return 0;
}


// static_cast is used when type-cast any type to void* or FROm void*
//Example 5

int main(){
	int i = 10;
	void *v = static_cast<void*>(&i);
	int *p = static_cast<int*>(v);
	return 0;
}
