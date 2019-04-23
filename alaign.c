#include <stdio.h>
struct T{
	char a;
	char cc;
	int b;
	//char d[9];
	//long long c;
};
struct S{
	char c;
	//char a[25];
	struct T t;
	//long long t;

};
struct A{
	char c;
	struct S s;
};
int main() {
	printf("%d %d %d\n",sizeof(struct A), sizeof(struct S), sizeof(struct T));
}
