#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i, j;
	scanf_s("%d", &n);
	for (i = -(n - 1); i <= (n - 1); i++) {

		for (j = -(n - 1); j <= (n - 1); j++) {
			if (abs(i) < abs(j)) {
				printf(" ");
			}
			else {
				printf("*");
			}

		}
		printf("\n");
	}
	return 0;
}	