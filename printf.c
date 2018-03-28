#include <stdio.h>

int main(int argc, char *argv[]){
	char buf[1024];

	fgets(buf, sizeof buf, stdin);
	printf(buf);

	return 0;
}
