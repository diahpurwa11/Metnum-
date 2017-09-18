#include <stdio.h>
#include <conio.h>
#include <windows.h>
/* 	Diah Purwaningsih 3411151012 SIE A
	tugas 1 metode numerik */

main(){
	int A, B, z;
	int i,jml;
	jml = 0;
	int pil=0;
	for(;pil!=7;){
		system("cls");
		printf("\nMENU HITUNG : ");
		printf("\n1. Penjumlahan");
		printf("\n2. Pengurangan");
		printf("\n3. Perkalian");
		printf("\n4. Pembagian");
		printf("\n5. Pangkat");
		printf("\n6. Fungsi");
		printf("\nPilihan : ");
		scanf("%d",&pil);
		switch(pil){
			case 1 : printf("\nPenjumlahan");
					printf("\n\nMasukkan angka A : ");
					scanf("%d",&A);
					printf("Masukkan angka B : ");
					scanf("%d",&B);
					jml = A + B;
					printf("%d + %d = %d",A,B,jml);
					getch();
					break;
			case 2 : printf("\nPengurangan");
					printf("\n\nMasukkan angka A : ");
					scanf("%d",&A);
					printf("Masukkan angka B : ");
					scanf("%d",&B);
					jml = A - B;
					printf("%d - %d = %d",A,B,jml);
					getch();
					break;
			case 3 : printf("\nPerkalian");
					printf("\n\nMasukkan angka A : ");
					scanf("%d",&A);
					printf("Masukkan angka B : ");
					scanf("%d",&B);
					jml = A * B;
					printf("%d X %d = %d",A,B,jml);
					getch();
					break;
			case 4 : printf("\nPembagian");
					printf("\n\nMasukkan angka A : ");
					scanf("%d",&A);
					printf("Masukkan angka B : ");
					scanf("%d",&B);
					jml = A / B;
					printf("%d / %d = %d",A,B,jml);
					getch();
					break;
			case 5 : printf("\nPangkat");
					printf("\n\nMasukkan angka A : ");
					scanf("%d",&A);
					printf("Masukkan pangkat B : ");
					scanf("%d",&B);
					jml = 1; 
					for(i=1;i<=B;i++){
						jml = jml * A;
					}
					printf("%d ^ %d = %d",A,B,jml);
					getch();
					break;
			case 6 : printf("\nFungsi");
					printf("\n\nMasukkan Nilai X : ");
					scanf("%d",&A);
					z=1;
					for(i=1;i<=2;i++){
						z = z * A;
					}
					jml = (2*z)- (3*A)+ 1;
					printf("hasil= %d",jml);
					getch();
					break;
		}
	}
}
