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
	
	A(const A& rhs) {
		cout << "A(A)" << endl;
	}
	A test(A t) {
		A x;
		return x;
	}
};

int main() {
	A a(void);
	A().test(a);
}
