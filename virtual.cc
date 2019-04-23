#include <iostream>
class A{
	public:
		int x;
};
class B : public virtual A{
	public :
		int x;
};

class C : public virtual A{
	public : 
		int x;
};

class D:public B, public C {
	public:
		int x;
};

int add(A& a, A& b) {
	return a.x + b.x;
};

int main(){
	A a;
	B b;
	C c;
	D d;
	a = A();
	a.x = 10;
	b = B();
	b.x = 11;
	std::cout << add(a,a ) << std::endl;

}
