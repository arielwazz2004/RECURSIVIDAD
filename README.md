#include <iostream>
#include <string>
using namespace std;

int main(){
	string matriz[2][2];
	int tam,tam2; 
	
	cout<<"cuantas filas quiere:  \n";
	cin>> tam;
	cout<<"cuantas columnas quiere: \n";
	cin>> tam2;
	
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam2;j++){
			
			cout<<"ingrese matriz["<< i << "][" << j << "]: ";
			cin>> matriz[i][j];
			
		}
	}
	
	cout<<" la matriz es: \n";
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam2;j++){
			cout<< matriz[i][j]<< " ";
			
			
			
			
		}
		cout<< endl;
		
	}

	cout<< "EL DATO A MOSTRAR ES: " << matriz[1][1] << endl;
	
	
