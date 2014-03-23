#include <stdio.h>

#define NUM_OF_CONTINENTS 7


void do_print(char *string){
	printf("Hello, %s\n", string);
}

void continents(void) {
	static char *continents[NUM_OF_CONTINENTS];
	continents[0] = "Africa";
	continents[1] = "Antarctica";
	continents[2] = "Asia";
	continents[3] = "Australia";
	continents[4] = "Europe";
	continents[5] = "North America";
	continents[6] = "South America\n";

	for (int i=0; i<NUM_OF_CONTINENTS; i++){
		do_print(continents[i]);
	}
}

char* world(void) {
	static char world[] = "World";
	return 	world;
}

int main(void) {

	/* Say hello to all the continents */
	continents();

	do_print(world());

	return 0;
}