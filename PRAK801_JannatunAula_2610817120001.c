#include <stdio.h>

int main (void){
    int nilai;
    int *ptr = &nilai;

    scanf("%d", &nilai);

    printf("Nilai variabel = %d\n", nilai);
    printf("Alamat variabel = %d\n", &nilai);
    printf("Nilai melalui pointer = %d\n", *(&nilai));

    *ptr = *ptr * 2;
    printf("Nilai setelah diubah lewat pointer = %d\n", *ptr);

    return 0;
}