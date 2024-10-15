#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Deklarasi prosedur
double nilaiInput1;
double nilaiInput2;
double nilaiInput3;
double nilaiInput4;
double nilaiInput5;
void segitiga(double a, double b, double c);
void belahKetupat(double d1, double d2);
void jajarGenjang(double alas, double tinggi, double sisiMiring);
void trapesium(double alas1, double alas2, double tinggi, double sisi1, double sisi2);
void lingkaran(double radius);

int main() {
    int pilihan;
    do
    {
        printf("Program Mengitung Luas dan Keliling Bangun Datar \n");
        printf("0. Keluar \n");
        printf("1. Segitiga \n");
        printf("2. Belah Ketupat \n");
        printf("3. Jajar Genjang \n");
        printf("4. Trapesium \n");
        printf("5. Lingkaran \n");
        printf("Silahkan Masukan Pilihan Anda : ");
        scanf("%d",&pilihan);

        switch (pilihan)
        {
        case 0: 
            printf("Berhasil Keluar dari Program");
            break;
        case 1:
            printf("Masukan Nilai Sisi A : ");
            scanf("%f", &nilaiInput1);
            printf("Masukan Nilai Sisi B : ");
            scanf("%f", &nilaiInput2);
            printf("Masukan Nilai Sisi C : ");
            scanf("%f", &nilaiInput3);
            segitiga(nilaiInput1,nilaiInput2,nilaiInput3);
            break;
        case 2:
            printf("Masukan Nilai Diagonal 1 : ");
            scanf("%f", &nilaiInput1);
            printf("Masukan Nilai Diagonal 2 : ");
            scanf("%f", &nilaiInput2);
            belahKetupat(nilaiInput1,nilaiInput2);
            break;
        case 3:
            printf("Masukan Nilai Sisi Alas : ");
            scanf("%f", &nilaiInput1);
            printf("Masukan Nilai Sisi Tinggi : ");
            scanf("%f", &nilaiInput2);
            printf("Masukan Nilai Sisi Miring : ");
            scanf("%f", &nilaiInput3);
            jajarGenjang(nilaiInput1,nilaiInput2,nilaiInput3);
            break;
        case 4:
            printf("Masukan Nilai Sisi Alas 1 : ");
            scanf("%f", &nilaiInput1);
            printf("Masukan Nilai Sisi Alas 2 : ");
            scanf("%f", &nilaiInput2);
            printf("Masukan Nilai Sisi Tinggi : ");
            scanf("%f", &nilaiInput3);
            printf("Masukan Nilai Sisi 1 : ");
            scanf("%f", &nilaiInput4);
            printf("Masukan Nilai Sisi 2 : ");
            scanf("%f", &nilaiInput5);
            trapesium(nilaiInput1,nilaiInput2,nilaiInput3,nilaiInput4,nilaiInput5);
            break;
        case 5:
            printf("Masukan Nilai Jari-jari : ");
            scanf("%f", &nilaiInput1);
            lingkaran(nilaiInput1);
            break;
        
        default:printf("Nilai Yang Anda Masukan Tidak Valid");
            break;
        }
    } while (pilihan != 0);
    

    return 0;
}

void segitiga(double a, double b, double c) {
    double s = (a + b + c) / 2; // Setengah keliling
    double luas = sqrt(s * (s - a) * (s - b) * (s - c));
    double keliling = a + b + c;
    printf("Luas Segitiga: %.2lf\n", luas);
    printf("Keliling Segitiga: %.2lf\n", keliling);
}

void belahKetupat(double d1, double d2) {
    double luas = 0.5 * d1 * d2;
    double sisi = sqrt((d1/2) * (d1/2) + (d2/2) * (d2/2)); // Menghitung panjang sisi dari diagonal
    double keliling = 4 * sisi;
    printf("Luas Belah Ketupat: %.2lf\n", luas);
    printf("Keliling Belah Ketupat: %.2lf\n", keliling);
}

void jajarGenjang(double alas, double tinggi, double sisiMiring) {
    double luas = alas * tinggi;
    double keliling = 2 * (alas + sisiMiring);
    printf("Luas Jajar Genjang: %.2lf\n", luas);
    printf("Keliling Jajar Genjang: %.2lf\n", keliling);
}

void trapesium(double alas1, double alas2, double tinggi, double sisi1, double sisi2) {
    double luas = 0.5 * (alas1 + alas2) * tinggi;
    double keliling = alas1 + alas2 + sisi1 + sisi2;
    printf("Luas Trapesium: %.2lf\n", luas);
    printf("Keliling Trapesium: %.2lf\n", keliling);
}

void lingkaran(double radius) {
    const double phi = 3.141592653589793;
    double luas = phi * radius * radius;
    double keliling = 2 * phi * radius;
    printf("Luas Lingkaran: %.2lf\n", luas);
    printf("Keliling Lingkaran: %.2lf\n", keliling);
}
