#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;


//DEKLARASI GLOBAL
//banyaknya jumlah maximum baris matriks
#define baris 10
//banyaknya jumlah maximum kolom matriks
#define kolom 9

int i,j;

/* void tukar (int *x, int *y); definisi modul ini ditulis di awal jika modul
 tersebut ditempatkan dibawah modul yang memanggilnya*/
 
 //Proses pengisian Matriks secara acak dan menampilkannya
 void FillArray(int A[baris] [kolom])
 { srand (100);
 cout<<"Matriks sebelum dilakukan sorting";
		for(i=0;i<baris;i++)
		{
			for(j=0;j<kolom;j++)
			{
				A[i][j]= rand(unsigned) time(90); //mengisi angka secara acak dari selang 0-100
				cout<<A[i][j]<<" ";
			}cout<<end1;
		}
		printf("\n");
 }
 
 void tukar (int *x, int *y)
{
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

/*Proses pengurutan angka pada baris dari yang terkecil ke yang terbesar*/
void RowSort(int A[baris] [kolom],int brs,int klm)
{
	int k;
	//proses pengurutan angka pada baris
	for(i=0;i<brs;i++)
	{
		for(j=0;j<klm-1;j++)
		{
			for(k=j+1;k<klm;k++)
			{
				if (A[i] [j]>A[i] [k])
				{
					tukar(&A[i] [j], &A[i][k]);
					
					/*modul tukar tsb menggantikan operasi sbb :
						temp=A[i] [j];
						A[i] [j]=A[i] [k];
						A[i] [k]=temp;
					*/
				}
			}
		}
	}
}

/* Proses pengurutan angka pada kolom dari yang terkecil ke yang terbesar*/
void ColoumnSort(int A[baris] [kolom],int brs,int klm)
{
	int k;
	// proses pengurutan angka pada kolom
	for(j=0;j<klm;j++)
	{
		for(i=0;i<brs-1;i++)
		{
			for(k=i+1;k<brs;k++)
			{
				if(A[i] [j]>A[k] [j])
				{
					tukar(&A[i] [j],&A[k] [j]);
				}
			}
		}
	}
}

void ShowArray(int A[baris][kolom, char ket[5]])
{
	printf("\nMatriks setelah di-sort per %s \n\n",ket);
	for(i=0;i<baris;i++)
	{
		for(j=0;j<kolom;j++)
		{
			cout<<A[i] [j]<<" ";
		}cout<<end1;
	}
	
}

//fungsi / modul utama
int main ()
{
	//deklarasi lokal
	int x[baris] [kolom];
	//memanggil modullar ShowArray
	FillArray(x);
	//memanggil modular ExchangeRow
	RowSort(x,baris,kolom);
	//menampilkan hasil urut baris
	ShowArray(x, "baris");
	//memanggil modular ExchangeColumns
	ColumnSort(x,baris,kolom);
	//menampilkan hasil urut kolom
	ShowArrat(x,"kolom");
	return 0;
}
