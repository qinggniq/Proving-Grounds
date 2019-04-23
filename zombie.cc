#include "my.h"
#include <iostream>

using namespace std;

int main() {
	switch(fork()) {
		case -1:
		exit(1);
		case 0:
		cout << getpid() << endl;
		//sleep(10000);
		exit(0);
		default:
		sleep(10000);
		exit(0);
	}
}
