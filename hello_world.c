#include <stdio.h>
#include <string.h>

#define NUM_OF_CONTINENTS 7
#define NUM_OF_CITIES 25

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

/*
 * Print function
 * TODO: refactor to not hardcode 'Hello'
 */
void do_print(char *string){
	/* Print newline only if its the first char */
	if (strncmp(string, "\n", 1) == 0){
		printf("%s", string);
	}
	else {
		printf("Hello, %s\n", string);
	}
}

/* World largest cities (population) according to
 http://www.worldatlas.com/citypops.htm
 March 2014
 */
void cities(int no) {
	static char *cities[NUM_OF_CITIES];
	cities[0] = "Tokyo";
	cities[1] = "Jakarta";
	cities[2] = "Seoul";
	cities[3] = "Delhi";
	cities[4] = "Shanghai";
	cities[5] = "Manila";
	cities[6] = "Karachi";
	cities[7] = "New York";
	cities[8] = "Sao Paulo";
	cities[9] = "Mexico City";
	cities[10] = "Cairo";
	cities[11] = "Beijing";
	cities[12] = "Osaka";
	cities[13] = "Mumbai (Bombay)";
	cities[14] = "Guangzhou";
	cities[15] = "Moscow";
	cities[16] = "Los Angeles";
	cities[17] = "Calcutta";
	cities[18] = "Dhaka";
	cities[19] = "Buenos Aires";
	cities[20] = "Istanbul";
	cities[21] = "Rio de Janeiro";
	cities[22] = "Shenzhen";
	cities[23] = "Lagos";
	cities[24] = "Paris";

	if (no > NUM_OF_CITIES) {
		no = NUM_OF_CITIES;
	}
	for (int i=0; i<no; i++){
		do_print(cities[i]);
	}
	do_print("\n");

}


int main(void) {

	/* Say hello to all the continents */
	continents();
	cities(10);

	do_print(world());

	return 0;
}