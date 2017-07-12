#include <stdio.h>

int main(int argc, char *argv[]){

	// Redirect stdio and stdout to file
	if ( argc == 3 ) {
		freopen(argv[1], "r", stdin);
		freopen(argv[2], "w", stdout);
	}

	int a;
	int b[] = {1,2,3,4,5,6,6};
	scanf("%d", &a);
	printf("%d\n", a);
}
