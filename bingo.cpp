#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define f 5
#define c 5

void rellenar(int c1[f][c], int c2[f][c], int c3[f][c], int c4[f][c]);
void jugar(int num, int c1[f][c], int c2[f][c], int c3[f][c], int c4[f][c]);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {


	int m[f][c], c1[f][c], c2[f][c], c3[f][c], c4[f][c], i, j, k;
	int num;
	
	rellenar(c1,c2,c3,c4);
		
 	jugar(num, c1, c2, c3, c4);
	
				
	
	
	return 0;
}

void rellenar(int c1[f][c], int c2[f][c], int c3[f][c], int c4[f][c]){
	
	int i, j, k, n, v[25], a[f][c], l, conta=0, kk;
	
	srand(time(0));
	
	
	for(i=0;i<4;i++){
		for(j=0;j<f;j++){
			printf("\n");
			for(k=0;k<c;k++){
				
				if(k==0)
				a[j][k]=rand()%15+1;
				
			
				if(k==1)
				a[j][k]=rand()%15+16;
				
				if(k==2){
				a[j][k]=rand()%15+31;
				if(k==j){
					a[j][k]=99999;
				}
				}
				
				if(k==3)
				a[j][k]=rand()%15+46;
				
				if(k==4)
				a[j][k]=rand()%15+61;
				
				if(i==0){
					
					c1[j][k]=a[j][k];
				}
				if(i==1){
					
					c2[j][k]=a[j][k];
				}
				if(i==2){
					
					c3[j][k]=a[j][k];
				}
				if(i==3){
					
					c4[j][k]=a[j][k];
				}
				
				if(a[j][k]==99999){
					printf(" ** ");
				}else if(a[j][k]<10){
					printf(" 0%d ", a[j][k]);
				}
				else{
					printf(" %d ", a[j][k]);
				}
				
			}
		}
		printf("\n");
	}
	
}
	
	
	
void jugar(int num, int c1[f][c], int c2[f][c], int c3[f][c], int c4[f][c]){
	
	
	char tecla='j';
	int co=0;
	int ve[75];
	int k=0, i, j;
		
		printf("\n");
		while(1){
		co=0;	
			
			
		num=rand()%75+1;	
			
		for(i=0;i<75;i++){
		
			if(num==ve[i]){
				co++;
			}	
						
		}	
		
		if(co==0){
			printf(" %d ", num);
			ve[k]=num;
			k++;
		
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				
				if(num==c1[i][j]){
					c1[i][j]=999;
				}
				
				if(num==c2[i][j]){
					c2[i][j]=999;
				}
				
				if(num==c3[i][j]){
					c3[i][j]=999;
				}
				
				if(num==c4[i][j]){
					c4[i][j]=999;
				}
				
								
			}
		}
		system("pause");
		system("cls");
		
		for(i=0;i<5;i++){
			printf("\n");
			for(j=0;j<5;j++){
				
				if(c1[i][j]==999){
					printf(" xx ");
				}else	
				if(c1[i][j]==99999){
					printf(" ** ");
				}
				else
				if(c1[i][j]<10){
					printf(" 0%d ", c1[i][j]);
				}
				else{
					printf(" %d ", c1[i][j]);
				}
				
				
				
			}
		}
		
		printf("\n");
		
		for(i=0;i<5;i++){
			printf("\n");
			for(j=0;j<5;j++){
				
				if(c2[i][j]==999){
					printf(" xx ");
				}else	
				if(c2[i][j]==99999){
					printf(" ** ");
				}
				else
				if(c2[i][j]<10){
					printf(" 0%d ", c2[i][j]);
				}
				else{
					printf(" %d ", c2[i][j]);
				}
			
			}
		}
		
		printf("\n");
		
		for(i=0;i<5;i++){
			printf("\n");
			for(j=0;j<5;j++){
				
				if(c3[i][j]==999){
					printf(" xx ");
				}else	
				if(c3[i][j]==99999){
					printf(" ** ");
				}
				else
				if(c3[i][j]<10){
					printf(" 0%d ", c3[i][j]);
				}
				else{
					printf(" %d ", c3[i][j]);
				}
				
				
				
			}
		}
		
		printf("\n");
		
		for(i=0;i<5;i++){
			printf("\n");
			for(j=0;j<5;j++){
				
				if(c4[i][j]==999){
					printf(" xx ");
				}else	
				if(c4[i][j]==99999){
					printf(" ** ");
				}
				else
				if(c4[i][j]<10){
					printf(" 0%d ", c4[i][j]);
				}
				else{
					printf(" %d ", c4[i][j]);
				}
			}
		}
		
		
		
		
		}
		
		else{
			num==rand()%75+1;
		}
		Sleep(200);		
		}
		
	
	
	
	
	
	
	
	
}
