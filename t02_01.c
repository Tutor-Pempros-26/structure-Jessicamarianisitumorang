// 12S25027 - Jessica Mariani Situmorang

#include <stdio.h>

struct Toko {
    int jumlah;
    float harga;
    float total;
    float diskon;
    float potongan;
    float bayar;
};

int main(int _argv, char **_argc)
{
    struct Toko t;

    scanf("%d", &t.jumlah);
    scanf("%f", &t.harga);

    t.total = t.jumlah * t.harga;
    t.diskon = 0;

    if (t.total > 500000) {
        t.diskon = 0.15;
    } 
    else if (t.total >= 100000) {
        t.diskon = 0.10;
    } 
    else if (t.total > 50000) {
        t.diskon = 0.05;
    }

    t.potongan = t.total * t.diskon;
    t.bayar = t.total - t.potongan;

    if (t.diskon == 0) {
        printf("---\n");
    } else {
        printf("%.2f\n", t.potongan);
    }

    printf("%.2f\n", t.bayar);

    return 0;
}