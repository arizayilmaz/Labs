/*
    Öğrenci bilgilerinden (öğrencino, isim, bölüm) oluşan sıralı erişimli bir dosya oluşturan ve bu dosya içerisinde;
    1-Dosya oluştur
    2-Listeleme
    3-Yeni kayıt ekleme
    4-Çıkış
*/
#include <stdio.h>
#include <stdlib.h>
FILE *studentData;
char ogrNo[10], isim[40], bolum[50];

void dosyaOlustur(void);
void dosyaListele(void);
void yeniKayit(void);

int main(void)
{
    int secim;
    while(1)
    {
        printf("Islemler su sekildedir;\n1-Dosya olustur\n2-Dosyayi listele\n3-Yeni kayit ekleme\n4-Cikis\nYapacaginiz islemi seciniz: ");
        scanf("%d", &secim);
        switch (secim)
        {
        case 1: dosyaOlustur();
            break;
        case 2: dosyaListele();
            break;
        case 3: yeniKayit();
            break;
        case 4: exit(0);
            break;
        }
    }

    return 0;
}

void dosyaOlustur(void)
{
    studentData=fopen("ogrenciBilgileri.txt","w");
    printf("Bilgileri su sira ile giriniz:\nOgrenci numarasi, isim ve bolum\n");
    scanf("%s %s %s", ogrNo, isim, bolum);
    while(!feof(stdin))
    {
        fprintf(studentData, "%s\t%s\t%s\n", ogrNo, isim, bolum);
        printf("Yeni kisiye geciliyor.\nKayit girisini durdurmak icin CTRL+Z yapiniz.\n");
        scanf("%s %s %s", ogrNo, isim, bolum);
    }
    fclose(studentData);
}

void dosyaListele(void)
{
    studentData=fopen("ogrenciBilgileri.txt","r");
    fscanf(studentData,"%s%s%s", ogrNo, isim, bolum);
    while(!feof(studentData))
    {
        printf("%s\t%s\t%s\n", ogrNo, isim, bolum);
        fscanf(studentData,"%s%s%s", ogrNo, isim, bolum);
    }
    fclose(studentData);
}

void yeniKayit(void)
{
    studentData=fopen("ogrenciBilgileri.txt","a");
    printf("Yeni kayit girisi aciliyor.\nBilgileri su sira ile giriniz:\nOgrenci numarasi, isim ve bolum\n");
    scanf("%s %s %s", ogrNo, isim, bolum);
    while(!feof(stdin))
    {
        fprintf(studentData, "%s\t%s\t%s\n", ogrNo, isim, bolum);
        printf("Yeni kisiye geciliyor.\nKayit girisini durdurmak icin CTRL+Z yapiniz.\n");
        scanf("%s %s %s", ogrNo, isim, bolum);
    }
    fclose(studentData);
}