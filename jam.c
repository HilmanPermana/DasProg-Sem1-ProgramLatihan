#include <stdio.h>
#include "jam.h"
#include <time.h>

/* body prototype */
/* mengisi sebuah jam dengan 00:00:00 */
void ResetJam (jam * J)
{
	/* algoritma */
	(*J).HH = 0;
	(*J).MM = 0;
	(*J).SS = 0;
}

//mengisi nilai sebuah jam jika nilai jam adalah valid
void SetJam (jam *J)
{
	/* algoritma */
	int vHH, vMM, vSS;		
	printf ("ENTRI jam = ");
	scanf  ("%ld", &vHH);
	printf ("ENTRI menit = ");
	scanf  ("%ld", &vMM);
	printf ("ENTRI detik = ");
	scanf  ("%ld", &vSS);
	if(IsJamValid(vHH,vMM,vSS))
	{
		*J = MakeJam(vHH,vMM,vSS);
	}else{
			printf("\ndata jam tidak valid");
		}
}

//mengisi sebuah jam dengan inputan HH:MM:SS oleh user
jam MakeJam (int H, int M, int S)
{
	jam j;
	(j).HH = H;
	(j).MM = M;
	(j).SS = S;
	return j;
}

/* menulis sebuah jam */
void GetJam (jam J)
{
	/* algoritma */
	printf("%2ld:%2ld:%2ld\n",J.HH,J.MM,J.SS);
}

/* konversi jam ke detik */
long int JamToDetik (jam J)
{
	/* kamus lokal */
	long int dt;
	/* Algoritma */
	dt=((J.HH)*3600)+((J.MM)*60)+(J.SS);
	return dt;
}

/* konversi detik ke jam */
jam DetikToJam (long int dt)
{
	/* Kamus Lokal */
	jam J;
	long int temp1,temp2,temp3;
	/*algoritma*/
	temp1=dt;
	J.HH=temp1/3600;
	temp2=temp1-(J.HH*3600);
	J.MM=temp2/60;
	temp3=temp2-(J.MM*60);
	J.SS=temp3;
	return J;
}

/*Menampilkan waktu sekarang*/
jam GetNow()
{
	/*Kamus Lokal*/
	jam J;
    char buff[100];
    time_t now = time(0);
    struct tm now_t = *localtime(&now);
    strftime (buff, 100, " %d-%m-%Y %H:%M:%S", &now_t);    

    J.HH = now_t.tm_hour;
    J.MM = now_t.tm_min;
    J.SS = now_t.tm_sec;
	
	return J;
}

//mengirim true jika H,M,S yang diinputkan oleh user dapat membentuk jam yang valid
boolean IsJamValid (int H, int M, int S)
{
	return ( (H>=0 && H<=23) && (M>=0 && M<=59) && (S>=0 && S<=59) );
}

