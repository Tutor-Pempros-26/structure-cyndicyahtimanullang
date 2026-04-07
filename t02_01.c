// 12S25040 - Cyndi Cyahti Manullang

#include <stdio.h>

struct Transaksi {
    int jumlah_buku;
    double harga_buku;
    double total_harga;
    double potongan;
    double total_bayar;
};

int main(int _argv, char **_argc)
{
    struct Transaksi t;

    scanf("%d", &t.jumlah_buku);
    scanf("%lf", &t.harga_buku);

    t.total_harga = t.jumlah_buku * t.harga_buku;

    if (t.total_harga > 500000) {
        t.potongan = t.total_harga * 0.15;
    } else if (t.total_harga >= 100000) {
        t.potongan = t.total_harga * 0.10;
    } else if (t.total_harga > 50000) {
        t.potongan = t.total_harga * 0.05;
    } else {
        t.potongan = 0.0;
    }

    t.total_bayar = t.total_harga - t.potongan;

    if (t.potongan == 0.0) {
        printf("---\n");
    } else {
        printf("%.2lf\n", t.potongan);
    }
    
    printf("%.2lf\n", t.total_bayar);

    return 0;
}