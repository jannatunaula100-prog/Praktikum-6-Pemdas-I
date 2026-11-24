#include <stdio.h>

struct Dompet {
    char nama[100];
    int saldo;
};

void topUp(struct Dompet *d, int nominal) {
    d->saldo += nominal;
    printf("Top up %d berhasil, saldo = %d\n", nominal, d->saldo);
}

void bayar(struct Dompet *d, int nominal) {
    if (d->saldo >= nominal) {
        d->saldo -= nominal;
        printf("Bayar %d berhasil, saldo = %d\n", nominal, d->saldo);
    } else {
        printf("Bayar %d gagal, saldo tidak cukup\n", nominal);
    }
}

int main(void) {
    struct Dompet d;
    int n, i;
    char jenis;
    int nominal;

    scanf("%s %d", d.nama, &d.saldo);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf(" %c %d", &jenis, &nominal);
        
        if (jenis == 'T') {
            topUp(&d, nominal);
        } else if (jenis == 'B') {
            bayar(&d, nominal);
        }
    }

    printf("Saldo akhir %s = %d\n", d.nama, d.saldo);

    return 0;
}