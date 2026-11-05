#include <stdio.h>

int main() {
    int bil;
    char simbol;

    scanf("%d %c", &bil, &simbol);

    for (int i = 1; i <= 50; i++) {
        if (i % bil == 0) {
            printf("%c ", simbol);
        } else {
            printf("%d ", i);
        }
    }
}