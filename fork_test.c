#include "my.h"

int main(int argc, char* argv[]) {
	if (argc < 2) {
		
	fork(); printf("a");
	fork(); printf("a");
	} else {
	setbuf(stdout, 0);	
	fork(); printf("a");
	fork(); printf("a");
	}
}
