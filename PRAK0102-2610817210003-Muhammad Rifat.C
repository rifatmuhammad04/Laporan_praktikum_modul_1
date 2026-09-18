#include <stdio.h>

int main() {
    float a = 4, b = 8, c = 3;
    float hasil = (a * b) / c;

    printf("variabel a bernilai %.0f\n", a);
    printf("variabel b bernilai %.0f\n", b);
    printf("variabel c bernilai %.0f\n", c);
    printf("Hasil dari a dikali b dibagi c adalah = %.6f\n", hasil);

    return 0;
}