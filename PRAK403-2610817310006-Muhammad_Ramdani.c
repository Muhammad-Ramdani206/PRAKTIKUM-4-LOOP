#include <stdio.h>

int main() {
	int bil1, bil2;

    scanf("%d %d", &bil1, &bil2);

	int langkah = (bil1 <= bil2) ? 1 : -1;

	for (int i = bil1;
	     langkah > 0 ? i <= bil2 : i >= bil2;
	     i += langkah) {
		if (i != bil1) {
			printf(" - ");
		}
		printf("%d %d", i, bil1 + bil2 - i);
	}
}