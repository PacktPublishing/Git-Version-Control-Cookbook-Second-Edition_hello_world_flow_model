#include <stdio.h>

char* world(void) {
	static char world[] = "world";
	return 	world;
}

void do_print(char *string){
	printf("Hello, %s\n", string);
}

int main(void) {
	do_print(world());

	return 0;
}