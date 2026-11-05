#include <stdio.h>

int main() {
	int batas;
	scanf("%d", &batas);

	for (int i = 1; i <= batas; i += 2) {
		printf("%d ", i);
	}

	printf("\n");

	for (int i = batas - batas % 2; i >= 2; i -= 2) {
		printf("%d ", i);
	}
}