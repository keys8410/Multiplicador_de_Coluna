#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
	
// protótipo de função
void cls(); // pause and clear screen
int mat_vet(int mat[3][3], int vet[3], int i, int j);

/* 
	06 de novembro de 2019	

    Departamento de T.I., UniProjeção (Taguatinga, Campus I)
    
    Sistemas de Informação (2º semestre)
    Autor: Yan Almeida Garcia 

	Faça um programa que lê um 'vetor' de 3 elementos e uma 'matriz' de 3 x 3 elementos. Em
	seguida o programa deve fazer a multiplicação do 'vetor' pelas colunas da 'matriz'. 

*/

// variáveis
	int mat[3][3], vet[3]; // linha -> coluna
	int i, j; // aux. matriz

int main(){
	setlocale(LC_ALL, "portuguese");
	
	for(;;){
		mat_vet(mat, vet, i , j);
  		cls();
	}

	return 0;
}

void cls(){
	getch();
	system("cls");
}

int mat_vet(int mat[3][3], int vet[3], int i, int j){
	// entrada de dados >> vetor
	puts("\n ::: Informe os elementos >> vetor :::");
	for(i = 0; i < 3; i++){
		printf(" Elemento [ %d ]: ", i + 1); scanf(" %d", &vet[i]);
	}
	cls();
	// entrada de dados >> matriz
	puts("\n ::: Informe os elementos >> matriz :::");
	for(i = 0; i < 3; i++){ // linhas
		puts("");
		for(j = 0; j < 3; j++){ // colunas
			printf(" Elemento [ %d ][ %d ]: ", i + 1, j + 1); scanf(" %d", &mat[i][j]);
		}
	}
	cls(); 
	// exibição de dados >> vetor e matriz && multiplicação
		// vetor
	puts("\n ::: Elementos >> vetor :::\n"
		"     Elementos originais: \n");
	for(i = 0; i < 3; i++){ // linhas
		printf(" | %d |", vet[i]);
	}
		// matriz
	puts("\n\n ::: Elementos >> matriz :::\n"
		"     Elementos originais: ");
	for(i = 0; i < 3; i++){ // linhas
		puts("");
		for(j = 0; j < 3; j++) printf(" | %d |", mat[i][j]);	
	}
		// vet x mat
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++) mat[i][j] *= vet[i];
	}
	puts("\n\n ::: Elementos >> vetor x matriz :::\n"
		"     Elementos multiplicados: ");
	for(i = 0; i < 3; i++){
		puts("");
		for(j = 0; j < 3; j++) printf(" | %d |", mat[i][j]);
	}
}
