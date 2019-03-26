#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
char s[100000] = {'a'};
for (int i=0; i<sizeof(s); ++i)
	s[i] = 'a';
s[sizeof(s)-1] = '\n';
s[sizeof (s)-2] = 'D';
printf("%s",s);
switch(fork()) {
	case -1:
		break;
	case 0:
		exit(0);
		break;
	default:
		wait();
}
return 0;
}

