#include <stdio.h>
#include <stdlib.h>

void kali(int b, int p, int *h);
void input(int *n, const char *x);

int main(){
	int hasil = 0, bil, pengali;
//	input(&bil,"bilangan");
//	input(&pengali,"pengali");
	printf ("\n Masukkan nilai bilangan = " );
	scanf ("%d",&bil);	
	printf ("\n Masukkan nilai pengali = " );
	scanf ("%d",&pengali);	
	kali(bil,pengali,&hasil);
	printf("hasil = %d", hasil);
	
	
	return 0;
}

void kali(int b, int p, int *h){
	int bp, n;
	bp = p;
	if (b == 0 || p == 0 ){
		*h = 0;
	}else{
		if(bp < 0 ){
			bp = bp*-1;
		}
		n = 1;
		while (n <= bp){
			*h = *h + b;
			n = n + 1;
		}
	}
	if (p < 0){
		*h = *h * -1;
	}
}

void input(int *n, const char *x){
	printf ("\n Masukkan nilai %s = " , x);
	scanf ("%d",&*n);	
}
