#include <stdio.h>

void cuenta1aN(int n){
	int i;
	for (i = 0; i < n; i++)
		printf("%d\n", i+1);
}

void suma(int a, int b) {
	int c = a + b;
	printf("%d\n", c);
}

int main() {
	printf("Hola Mundo!");
	int n = 10;
	cuenta1aN(n);
	return 0;
}
