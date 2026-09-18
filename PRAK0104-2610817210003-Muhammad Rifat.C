#include <stdio.h>

int main() {
    int sepatu_a = 400000;
    int sepatu_b = 350000;

    int diskon_a = sepatu_a - (sepatu_a * 13 / 100);
    int diskon_b = sepatu_b - (sepatu_b * 21 / 100);

    printf("harga sepatu a adalah %d\n", sepatu_a);
    printf("harga sepatu b adalah %d\n", sepatu_b);
    printf("Sepatu a mendapatkan diskon 13%% sehingga harganya menjadi %d\n", diskon_a);
    printf("Sepatu b mendapatkan diskon 21%% sehingga harganya menjadi %d\n", diskon_b);

    return 0;
}