#include <stdio.h>
#include "jam.h"
#include <conio.h>
#include <time.h>
#include "profile.h"

int main ()
{
//	getName();
	
	jam vJam;
	int vdetik;
	
//	SetJam(&vJam);	
//	GetJam(vJam);
//	vJam=GetNow();
//	printf("\nSekarang adalah pukul ");
//	GetJam(vJam);		
//	printf ("\nJumlah detik adalah %d",JamToDetik(vJam));	
	vJam=DetikToJam(5000);
	printf("\n5000 detik adalah sejumlah jam  ");
	GetJam(vJam);	
	vdetik=3;
	printf("Maka waktu setelah ditambahkan %d adalah ",vdetik);
	vdetik=vdetik+JamToDetik(vJam);
	vJam=DetikToJam(vdetik);	
	GetJam(vJam);	
		
	
return 0;
}

