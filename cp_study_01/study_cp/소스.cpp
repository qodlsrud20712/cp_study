#include <stdio.h>

int main() {
	int i;

	scanf_s("%d", &i);

	if (i >= 90 && i <= 100) {
		printf("A\n", i);
	}
	else if (i >= 80 && i <= 89) {
		printf("B\n", i);
	}
	else if (i >= 70 && i <= 79) {
		printf("C\n", i);
	}
	else if (i >= 60 && i <= 69) {
		printf("D\n", i);
	}
	else {
		printf("E\n", i);
	}

}