#include <stdio.h>

// Monitoring Publikasi Ilmiah Mahasiswa

void hitungPublikasi() {
    int NA1, NA2, NA3, NA4, NB1, NB2, NB3, NC1, NC2, NC3, NM;
    float RL, RN, RI, skorPublikasi;

    printf("\n=== MONITORING PUBLIKASI ILMIAH ===\n");

    // Input data publikasi
    printf("Masukkan jumlah mahasiswa (NM): ");
    scanf("%d", &NM);

    printf("Masukkan jumlah publikasi di jurnal nasional tidak terakreditasi (NA1): ");
    scanf("%d", &NA1);

    printf("Masukkan jumlah publikasi di jurnal nasional terakreditasi (NA2): ");
    scanf("%d", &NA2);

    printf("Masukkan jumlah publikasi di jurnal internasional (NA3): ");
    scanf("%d", &NA3);

    printf("Masukkan jumlah publikasi di jurnal internasional bereputasi (NA4): ");
    scanf("%d", &NA4);

    printf("Masukkan jumlah publikasi di seminar wilayah/lokal/PT (NB1): ");
    scanf("%d", &NB1);

    printf("Masukkan jumlah publikasi di seminar nasional (NB2): ");
    scanf("%d", &NB2);

    printf("Masukkan jumlah publikasi di seminar internasional (NB3): ");
    scanf("%d", &NB3);

    printf("Masukkan jumlah tulisan di media massa wilayah (NC1): ");
    scanf("%d", &NC1);

    printf("Masukkan jumlah tulisan di media massa nasional (NC2): ");
    scanf("%d", &NC2);

    printf("Masukkan jumlah tulisan di media massa internasional (NC3): ");
    scanf("%d", &NC3);

    // Hitung persentase publikasi
    RL = ((float)(NA1 + NB1 + NC1) / NM) * 100.0;
    RN = ((float)(NA2 + NA3 + NB2 + NC2) / NM) * 100.0;
    RI = ((float)(NA4 + NB3 + NC3) / NM) * 100.0;

    // Hitung skor publikasi berdasarkan kriteria
    if (RI >= 2.0) {
        skorPublikasi = 4.0;
    } else if (RI < 2.0 && RN >= 20.0) {
        skorPublikasi = 3.0 + (RI / 2.0);
    } else if (RI == 0 && RN == 0 && RL >= 70.0) {
        skorPublikasi = 2.0;
    } else if (RI < 2.0 && RN < 20.0) {
        skorPublikasi = 2.0 + ((2.0 * RI) / 2.0) + (RN / 20.0) - ((RI * RN) / (2.0 * 20.0));
    } else {
        skorPublikasi = (2.0 * RL) / 70.0;
    }

    printf("\nPersentase RL (Lokal): %.2f%%\n", RL);
    printf("Persentase RN (Nasional): %.2f%%\n", RN);
    printf("Persentase RI (Internasional): %.2f%%\n", RI);
    printf("Skor Publikasi Ilmiah: %.2f\n", skorPublikasi);
}

int main() {
    printf("MONITORING PUBLIKASI ILMIAH\n");
    printf("===========================\n");

    // Panggil fungsi Monitoring Publikasi
    hitungPublikasi();

    return 0;
}