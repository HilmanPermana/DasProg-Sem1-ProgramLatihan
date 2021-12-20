#ifndef jam_H
#define jam_H
#include "boolean_h.h"

//spesifikasi
typedef struct
{
	int HH; //valid dalam 0 sampai dengan 23
	int MM; //valid dalam 0 sampai dengan 59
	int SS; //valid dalam 0 sampai dengan 59
} jam;

// prototype
//mengisi sebuah jam dengan 00:00:00 ---> konstruktor
void ResetJam (jam *J);

//mengisi sebuah jam dengan inputan HH:MM:SS oleh user ---> konstruktor
jam MakeJam (int H, int M, int S);

//mengisi sebuah jam dengan waktu sekarang yang diambil dari library <time.h>  ---> konstruktor
jam GetNow();

//mengirim true jika H,M,S yang diinputkan oleh user dapat membentuk jam yang valid
boolean IsJamValid (int H, int M, int S);

//mengisi nilai sebuah jam jika nilai jam adalah valid ---> operator
void SetJam (jam *J);

//menampilkan/menulis sebuah jam ke layar monitor ---> operator
void GetJam (jam J);

//konversi jam ke detik ---> operator
long int JamToDetik (jam J);

//konversi detik ke jam  ---> operator
jam DetikToJam (long int d);

#endif

