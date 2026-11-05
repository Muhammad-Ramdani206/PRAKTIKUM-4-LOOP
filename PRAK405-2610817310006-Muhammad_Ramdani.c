#include <stdio.h>

int main() {
	int n;
	int kelipatan;

	if (scanf("%d %d", &n, &kelipatan) != 2 || n < 1) {
		return 1;
	}

	int jumlahSemuaBaris = 0;

	for (int baris = 1; baris <= n; baris++) {
		int jumlahBaris = 0;

		for (int angka = baris; angka >= 1; angka--) {
			if (angka != baris) {
				printf(" + ");
			}
			printf("(%d * %d)", angka, kelipatan);
			jumlahBaris += angka * kelipatan;
		}
		printf(" = %d\n", jumlahBaris);
		jumlahSemuaBaris += jumlahBaris;
	}
	printf("%d\n", jumlahSemuaBaris);
}