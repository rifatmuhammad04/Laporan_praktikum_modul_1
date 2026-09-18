#include <stdio.h>

int main() {
    int troops = 958730;
    int heroes = 5;

    int troops_per_hero = troops / heroes;
    printf("jumlah pasukan yang dibawa yu zhong adalah = %d\n", troops);
    printf("jumlah pahlawan = %d\n", heroes);
    printf("jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d\n", troops_per_hero);

    return 0;
}