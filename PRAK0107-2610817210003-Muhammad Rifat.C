#include <stdio.h>

int main() {
    int side1 = 4, side2 = 5, side3 = 7;
    int price_per_meter = 85000;

    int perimeter = side1 + side2 + side3;
    int cost = perimeter * price_per_meter;

    printf("Diketahui:");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", side1, side2, side3);
    printf("Keliling tanah pak dengklek adalah %d\n", perimeter);
    printf("Harga tanah per meter adalah %d\n", price_per_meter);
    printf("Jawaban :");
    printf("Biaya yang diperlukan pak dengklek adalah: Rp %d\n", cost);
    return 0;
}
