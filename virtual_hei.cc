#include <iostream>

using namespace std;
class A{
	public:
		virtual void foo() {}
};

class B:public A{
	public:
		virtual void foo() {}
};
class C:public A{
	public:
		virtual void ftt() {}
};

int main() {
	cout << "A: " << sizeof(A) << " B: " << sizeof(B) << " C: " << sizeof(C) << endl;
}
