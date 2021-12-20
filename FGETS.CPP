/*------------------------------------------------------*/ 
/* File Program : FGETS.CPP */ 
/* Contoh pemakaian fgets() untuk membaca isi file teks */ 
/* Author : SN */ 
/*------------------------------------------------------*/ 
#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
#include <stdlib.h> 

#define PANJANG 256 

int main(void) 
{
 	FILE *f_teks; 
 	char string[PANJANG]; 
 	char namafile[65]; 
 	
 	printf("PROGRAM UNTUK MELIHAT ISI FILE TEKS\r\n");
 	printf("Nama file : "); 
 	gets(namafile); 
/* pada output, tuliskan sebuah nama file yang akan dibaca, lengkap 
dengan ekstensinya! */ 

 /* buka file untuk dibaca */ 
 if ((f_teks=fopen(namafile, "rt")) == NULL) 
 { 
 	printf("File tak dapat dibuka!\r\n"); 
 	exit(1); 
 } 
 
 /* Baca string dari file selama masih ada */ 
 while ((fgets(string, PANJANG, f_teks)) != NULL) 
 /* Tampilkan string ke layar */ 
 printf("%s\r", string); 
 
 fclose(f_teks); /* tutup file setiap selesai proses thd file */ 
 return 0; 
} 

