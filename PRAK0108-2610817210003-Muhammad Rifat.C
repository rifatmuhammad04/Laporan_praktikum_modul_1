#include <stdio.h>

int main() {
    float rounds = 5;
    float distance = 14;
    float phi = 3.14;

    float one_radius_distance = distance / rounds;
    float radius = one_radius_distance / (2 * phi);
    
    printf("diketahui :\n");
    printf("pak dengklek mengelilingi taman = %.0f rounds\n", rounds);
    printf("jarak tempuh pak dengklek adalah %.0f kilometers\n", distance);
    printf("jawaban :\n");
    printf("jari-jari taman yang dielilingi pak dengklek adalah %.2f kilometers\n", radius);
    return 0;
}