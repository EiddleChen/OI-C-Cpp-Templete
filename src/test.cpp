#include <stdio.h>

int main(int argc, char *argv[]){

	// Redirect stdio and stdout to file
	if ( argc == 2 ) {
		freopen(argv[1], "w", stdout);
	}
}
