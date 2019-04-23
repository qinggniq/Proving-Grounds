#include <iostream>
#include <stdlib.h>

using namespace std;

class A{
	public :
		int x;
	       	int y;
	       	int	z;
		static int s;
		virtual void foo() {}
};

int A::s = 10;

int main() {
	decltype (&A::z) p = &A::x;
	A a;
	a.x = 6678;
	cout << a.*p << endl;
	printf("%p, %p, %p, %p \n", &A::x, &A::y, &A::z, & A::s);
	cout << (&A::x) << endl;
	cout << & A::y << endl;
	cout << & A::z << endl;
	cout << & A::s << endl;
}
