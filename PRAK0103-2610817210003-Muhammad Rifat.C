#include <stdio.h>

int main() {
    float a = 9, b = 6, x = 10, y = 7;
    float result = (a + b) * x / y;

    printf("variabel a bernilai %.0f\n", a);
    printf("variabel b bernilai %.0f\n", b);
    printf("variabel x bernilai %.0f\n", x);
    printf("variabel y bernilai %.0f\n", y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", result);

    return 0;
}