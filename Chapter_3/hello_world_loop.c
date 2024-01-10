		#include <stdio.h>
#include <stdlib.h>

// Change the value in the puts function to get the output you want
// int main(int argc, char** argv) {
	// for (int i = 0; i < 5; i++) {
	// puts("Hello, world!");
	// }
	

  // return 0;
// }

	// int main(int argc, char** argv) {
		// int i=5;
		// while(i>0){
			// puts("Hello, world!");
			// i--;
		// }
		// return 0;
	// }
		

void printHello(int times){
    while(times > 0){
        puts("Hello, World!");
        times--;
    }
    puts("Output finished!");
}

int main(int argc, char** argv) {
    char input[2048];
    fputs("How many times do you want to output? ", stdout);
    fgets(input, 2048, stdin);
    int times = atoi(input); // Convert input to an integer
    printHello(times);
    return 0;
}