#include <stdio.h>

#define NUM_OF_CONTINENTS 7

void continents(void) {
	const char *continents[NUM_OF_CONTINENTS];
	continents[0] = "Africa";
	continents[1] = "Antarctica";
	continents[2] = "Asia";
	continents[3] = "Australia";
	continents[4] = "Europe";
	continents[5] = "North America";
	continents[6] = "South America";

	for (int i=0; i<NUM_OF_CONTINENTS; i++){
		printf("Hello, %s\n", continents[i]);
	}
	printf("\n");
}

char* world(void) {
	static char world[] = "World";
	return 	world;
}

void do_print(char *string){
	printf("Hello, %s\n", string);
}

int main(void) {

	/* Say hello to all the continents */
	continents();

	do_print(world());

	return 0;
}