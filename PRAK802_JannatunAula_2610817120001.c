#include <stdio.h>

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void prosesPenukaran(int *andi, int *budi) {
    printf("Sebelum ditukar: Andi = %d, Budi = %d\n", *andi, *budi);
    tukar(andi, budi);
    printf("Sesudah ditukar: Andi = %d, Budi = %d\n", *andi, *budi);
}

int main(void) {
    int andi, budi;
    scanf("%d %d", &andi, &budi);

    printf("Sebelum ditukar: Andi = %d, Budi = %d\n", andi, budi);
    tukar(&andi, &budi);
    printf("Sesudah ditukar: Andi = %d, Budi = %d\n", andi, budi);
    
    return 0;
}