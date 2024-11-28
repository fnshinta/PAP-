#include <stdio.h>

// KALKULATOR PENILAIAN ISK

void hitungNDTPS(){
    int NDTPS;
    float skorNDTPS;

    printf("masukkan jumlah NDTPS (Dosen tetap yang ditugaskan sesuai bidang): ");
    scanf("%d", &NDTPS);

    if (NDTPS >= 6)
    {
        skorNDTPS = 4;
    }
    else if (NDTPS >= 3)
    {
        skorNDTPS = (2.0 * NDTPS) / 3.0;
    }
    else
    {
        skorNDTPS = 0;
    }

    printf("Skor NDTPS: %.2f\n", skorNDTPS);
}

void hitungJabatanAkademik(){
    int NDGB, NDLK, NDTPS;
    float PGBLK, skorJabatan;

    printf("\nmasukkan jumlah Guru Besar (NDGB): ");
    scanf("%d", &NDGB);

    printf("\nmasukkan jumlah Lektor Kepala (NDLK): ");
    scanf("%d", &NDLK);

    printf("\nmasukkan jumlah total NDTPS: ");
    scanf("%d", &NDTPS);

    PGBLK = ((float)(NDGB + NDLK) / NDTPS) * 100.0;

    if (PGBLK >= 70.0)
    {
        skorJabatan = 4.0;
    }
    else if (PGBLK >= 2)
    {
        skorJabatan = 2.0 + ((20.0 * PGBLK) / 7.0);
    }
    else
    {
        skorJabatan = printf("tidak ada skor kurang dari 2");
    }
    
    printf("Persentase PGBLK: %.2f%%\n", PGBLK);
    printf("Skor jabatan akademik: %.2f\n", skorJabatan);
}

int main(){
    printf("kalkulator penilaian ISK\n");
    printf("=========================\n");

    // hitung skor NDTPS
    hitungNDTPS();

    // hitung skor jabatan akademik
    hitungJabatanAkademik();

    return 0;
}