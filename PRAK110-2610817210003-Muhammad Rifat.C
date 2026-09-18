#include <stdio.h>
#include <math.h>

int main() {
    int base = 5;
    int height = 12;

    int side_a = height;
    int side_c = base;
    int side_b = sqrt((base * base) + (height * height));

    int perimeter = side_a + side_b + side_c;
    int area = 0.5 * base * height;

    printf("diketahui :\n");
    printf("Alas = %d cm\n", base);
    printf("Tinggi = %d cm\n\n", height);
    printf("jawaban :\n");
    printf("sisi A = %d cm\n", side_a);
    printf("sisi B = %d cm\n", side_b);
    printf("sisi C = %d cm\n", side_c);
    printf("keliling = %d cm\n", perimeter);
    printf("luas = %d cm\n", area);

    return 0;
}