/*EL2208 Praktikum Pemecahan Masalah dengan C 2020/2021
*Modul            : 5
*Percobaan        : -
*Hari dan Tanggal : Selasa, 23 Maret 2021
*Nama (NIM)       : -
*Asisten (NIM)    : Dismas Widyanto (13218065)
*Nama File        : -
*Deskripsi        : Program untuk menghitung jumlah riemann suatu fungsi
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//rekursif cek
float jumlahriemann(float partisi, float atas, float bawah){
    float num, denum;
    //kasus basis partisi==atas
    if(atas<=bawah+partisi){
        num=10*pow(atas,2)-7*atas*sin(atas);
        denum=pow(atas,2)+atas+1;

        return num/denum*partisi;
    }
    else{
        num=10*pow(atas,2)-7*atas*sin(atas);
        denum=pow(atas,2)+atas+1;

        return num/denum*partisi + jumlahriemann(partisi, atas-partisi, bawah);
    }
}

int main(){
    //variabel
    float batas_atas, batas_bawah, lebar;
    float hasil;

    //input bilangan
    printf("Masukkan Batas Bawah: ");
    scanf("%f",&batas_bawah);
    printf("Masukkan Batas Atas: ");
    scanf("%f",&batas_atas);
    printf("Masukkan Lebar Partisi: ");
    scanf("%f",&lebar);

    //proses
    hasil=jumlahriemann(lebar,batas_atas,batas_bawah);
    printf("Jumlah Riemann dari Fungsi adalah: %.3f",hasil);

    return 0;
}
