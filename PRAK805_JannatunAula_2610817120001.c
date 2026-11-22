#include <stdio.h>

struct Dompet {
    char nama[100];
    long long saldo;
};

void topUp(struct Dompet *d, long long nominal) {
    d->saldo += nominal;
    printf("Top up %lld berhasil, saldo = %lld\n", nominal, d->saldo);
}

void bayar(struct Dompet *d, long long nominal) {
    if (d->saldo >= nominal) {
        d->saldo -= nominal;
        printf("Bayar %lld berhasil, saldo = %lld\n", nominal, d->saldo);
    } else {
        printf("Bayar %lld gagal, saldo tidak cukup\n", nominal);
    }
}

int main(void) {
    struct Dompet d;
    int n, i;
    char jenis;
    long long nominal;

    scanf("%s %lld", d.nama, &d.saldo);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf(" %c %lld", &jenis, &nominal);
        
        if (jenis == 'T') {
            topUp(&d, nominal);
        } else if (jenis == 'B') {
            bayar(&d, nominal);
        }
    }

    printf("Saldo akhir %s = %lld\n", d.nama, d.saldo);

    return 0;
}