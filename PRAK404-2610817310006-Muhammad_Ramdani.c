#include <stdio.h>

int main() {
    int pilihan;
    double a, b, hasil;

    while (1) {
        printf("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan Pilihan : ");

        if (scanf("%d", &pilihan) != 1) {
            printf("Input harus berupa angka. Silahkan coba lagi.\n\n");
            while (getchar() != '\n');
            continue;
        }

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Muhammad Ramdani\n");
            break;
        }

        if (pilihan < 1 || pilihan > 4) {
            printf("Input anda salah, silahkan coba lagi\n\n");
            continue;
        }

        printf("Masukkan nilai pertama : ");
        scanf("%lf", &a);
        printf("Masukkan nilai kedua : ");
        scanf("%lf", &b);

        if (pilihan == 4 && b == 0) {
            printf("Tidak dapat membagi dengan nol.\n\n");
            continue;
        }

        switch (pilihan) {
            case 1: hasil = a + b; printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", a, b, hasil); break;
            case 2: hasil = a - b; printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", a, b, hasil); break;
            case 3: hasil = a * b; printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", a, b, hasil); break;
            case 4: hasil = a / b; printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n", a, b, hasil); break;
        }
    }
}