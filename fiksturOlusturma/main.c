#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_TAKIM 19

void fiksturOlustur(char takimlar[MAX_TAKIM][50], int takimSayisi) {
    FILE *fiksturDosyasi = fopen("fikstur.txt", "w");
    if (fiksturDosyasi == NULL) {
        printf("Fikstur dosyası açılamadı\n");
        return;
    }

    int haftaSayisi = (takimSayisi - 1) * 2;
    int macSayisi = (takimSayisi-1) / 2;

    srand(time(NULL));

    for (int hafta = 1; hafta <= haftaSayisi; hafta++) {
        fprintf(fiksturDosyasi, "--- %d. Hafta ---\n", hafta);
        printf("--- %d. Hafta ---\n", hafta);

        int kullanilanTakimlar[MAX_TAKIM] = {0};

        for (int i = 0; i < macSayisi; i++) {
            int evSahibi, deplasman;

            do {
                evSahibi = rand() % takimSayisi;
            } while (kullanilanTakimlar[evSahibi]);

            do {
                deplasman = rand() % takimSayisi;
            } while (deplasman == evSahibi || kullanilanTakimlar[deplasman]);

            kullanilanTakimlar[evSahibi] = 1;
            kullanilanTakimlar[deplasman] = 1;

            fprintf(fiksturDosyasi, "%s vs %s\n", takimlar[evSahibi], takimlar[deplasman]);
            printf("%s vs %s\n", takimlar[evSahibi], takimlar[deplasman]);
        }

        for (int j = 0; j < takimSayisi; j++) {
            if (!kullanilanTakimlar[j]) {
                fprintf(fiksturDosyasi, "Bu hafta maç yapmayan takım: %s\n", takimlar[j]);
                printf("Bu hafta maç yapmayan takım: %s\n", takimlar[j]);
                break;
            }
        }
    }

    fclose(fiksturDosyasi);
}

int main() {
    FILE *takimDosyasi = fopen("takimlar.txt", "r");
    if (takimDosyasi == NULL) {
        printf("Takım dosyası açılamadı\n");
        return 1;
    }

    char takimlar[MAX_TAKIM][50];
    int takimSayisi = 0;

    while (fgets(takimlar[takimSayisi], sizeof(takimlar[takimSayisi]), takimDosyasi) != NULL && takimSayisi < MAX_TAKIM) {
        takimlar[takimSayisi][strcspn(takimlar[takimSayisi], "\n")] = '\0';
        takimSayisi++;
    }
    fclose(takimDosyasi);

   
    fiksturOlustur(takimlar, takimSayisi);

    return 0;
}