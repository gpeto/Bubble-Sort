#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int vet[4], i, aux; 
// bubble [5]
// void ordenarBubbleSort(){
// for(int i=0; i < 5; i++)
//bubble[i]=vet[i]};

void sortear(){
	system ("cls");
	srand (time(NULL));
	cout << " \nNUMEROS SORTEADOS:" << endl;
	for (i = 0; i < 4;i++){
		vet[i] = rand () % 100;
		cout << "[" << vet[i] <<"]" << "  ";
	}	
}
void ordenar(){
		for(int j=3;j>0;j--){
		for(int i=0;i<j;i++){
		if(vet[i]>vet[i+1]){
			aux = vet[i];
			vet[i]= vet[i+1];
			vet[i+1] = aux;
		}
	}
	}
	cout << "\n\n";
	cout << "NUMEROS ORDENADOS:" << endl;
	for (int i =0;i<4;i++){
		cout <<"[" << vet[i] << "]" << "  " <<endl;
	}
}

void menU(){
	int op;
	do{
		cout << " \n";
		cout << "        ------------------------------" << endl;
		cout << "        - SISTEMA  DO BUBBLE SORT     -"<< endl;
		cout << "        -   UNIVERSITARIO ESTACIO    -" << endl; 
		cout << "        -        DO CEARA            -" << endl << endl;
		cout << "        -  1 - SORTEAR               -" << endl;
		cout << "        -  2 - ORDENAR               -" << endl;
		cout << "        -  3 - SAIR                  -" << endl;
		cout << "        ------------------------------" << endl;
		cin >> op;
		switch(op){
			case 1: sortear();
				break;
			case 2: ordenar();
				break;
			case 3: cout << "SAIRRRRR puk puk pak";
				break;
		}
	}while(op !=3);
}

main(void){
	menU();
}
