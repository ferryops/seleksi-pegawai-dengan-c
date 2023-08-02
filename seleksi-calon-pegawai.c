#include <stdio.h>

int main() {
    char nama[50];
    char jenisKelamin;
    int usia;
    float tinggi;
    int pilihan;

    printf(">>>>>Seleksi pegawai RS Kampus UDINUS (KU) Semarang<<<<<\n");
    printf("Masukkan nama: ");
    scanf("%s", nama);

    printf("Masukkan jenis kelamin [L/P]: ");
    scanf(" %c", &jenisKelamin);

    printf("Masukkan usia: ");
    scanf("%d", &usia);

    printf("Masukkan tinggi badan: ");
    scanf("%f", &tinggi);

    printf("\nSELAMAT DATANG, %s!!\n", nama);
    printf("Lowongan yang dibuka:\n");
    printf("1. Rekam Medis\n");
    printf("2. Accounting\n");
    printf("Masukkan pilihan anda: ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        int pendidikanRekamMedis;
        printf("\nMasukkan pendidikan terakhir anda!\n");
        printf("1. SMA\n");
        printf("2. D3-RMIK\n");
        printf("3. S1-MIK\n");
        printf("Pendidikan terakhir anda adalah: ");
        scanf("%d", &pendidikanRekamMedis);

        if ((pendidikanRekamMedis == 2 || pendidikanRekamMedis == 3) && jenisKelamin == 'L'){
            char strAktif;
            printf("\nApakah anda memiliki STR aktif? [Y/N]: ");
            scanf(" %c", &strAktif);

            if (strAktif == 'Y' || strAktif == 'y') {
                printf("\nSelamat %s Dinyatakan Lolos Seleksi!\n", nama);
            } else {
                printf("\nMaaf %s, anda tidak lolos seleksi.\n", nama);
            }
        } else {
            printf("\nMaaf %s, anda tidak lolos seleksi.\n", nama);
        }
    } else if (pilihan == 2) {
        int pendidikanAccounting;
        printf("\nMasukkan pendidikan terakhir anda!\n");
        printf("1. SMA\n");
        printf("2. SMK-Akuntansi\n");
        printf("3. S1-Akuntansi\n");
        printf("Pendidikan terakhir anda adalah: ");
        scanf("%d", &pendidikanAccounting);

        if ((pendidikanAccounting == 3)&& jenisKelamin == 'P') {
            char sertifikatExcel;
            printf("\nApakah anda memiliki sertifikat Excel? [Y/N]: ");
            scanf(" %c", &sertifikatExcel);

            if (sertifikatExcel == 'Y' || sertifikatExcel == 'y') {
                printf("\nSelamat %s Dinyatakan Lolos Seleksi!\n", nama);
            } else {
                printf("\nMaaf %s, anda tidak lolos seleksi.\n", nama);
            }
        } else {
            printf("\nMaaf %s, anda tidak lolos seleksi.\n", nama);
        }
    } else {
        printf("\nMaaf %s, anda tidak lolos seleksi.\n", nama);
    }

    return 0;
}
