#include <iostream>
using namespace std;

class A{
	public: 
	A() {
		cout << "A()" << endl;
	}
	~A() {
		cout << "~A()" << endl;
	}
	
	A(A& rhs) {
		cout << "A(A)" << endl;
	}
	A test(A t) {
		A x;
		return x;
	}
};

int main() {
	A a;
	A().test(a);
}
