#include <iostream>
#include "Calculadora.h"

void menu();
void sumar();
void resta();
void multiplicar();
void dividir();


//objeto calculadora
Calculadora *calcular=new Calculadora();

//main
int main() {
	menu();
	
	return 0;
}


//menu del programa
void menu(){
	char opc;
	
	do{
		system("cls");
		fflush(stdin);
		std::cout<<"1. sumar\n";
		std::cout<<"2. restar\n";
		std::cout<<"3. dividir\n";
		std::cout<<"4. multiplicar\n";
		std::cout<<"5. salir\n";
		std::cout<<"6. Opcion: ";std::cin>>opc;
		
		switch(opc){
			case '1': sumar();break;
			case '2': resta();break;
			case '3': dividir();break;
			case '4': multiplicar();break;
			default: std::cout<<"\nOpcion incorrecta\n\n";
		}
		std::cout<<"\n";
		system("pause");
	}while(opc!='5');
}

//funcion suma
void sumar(){
	char opc;
	double _x[999],tam=0,y;
	
	std::cout<<"\nDigite los numeros(*Digite el cero para salir*): ";
	for(int i=0;;i++){
		tam+=1;//contador
		std::cout<<"> ";std::cin>>y;
		if(y<1){
			break;
		}
		else{
			_x[i]=y;
		}
	}
	std::cout<<"El resulado es: "<<calcular->suma_de_N_numeros(_x,tam);//mostrano el resutlado
}

//resta los numeros a introducir
void resta(){
	double x[9999],tam=0,y;
	std::cout<<"\n#NOTA: AL PRIMER NUMERO QUE USTED DIGITE SE LES RESTARAN LOS SIGUIENTES#";
	std::cout<<"\nDigite los numeros a restar(*Digite el cero o menor para salir*):\n";
	for(int i=0;;i++){
		std::cout<<"> ";std::cin>>y;
		if(y<1){
			break;
		}
		else{
			x[i]=y;
			tam+=1;
		}
	}
	
	std::cout<<"\nEl resultado es: "<<calcular->resta_de_N_numeros(x,tam);//mostrando resultado
}

//multiplica los numeros a introducir
void multiplicar(){
	double x[9999],tam=0,y;
	
	std::cout<<"\nDigite los numeros a multiplicar(*Digite el cero para salir*):\n";
	
	for(int i=0;;i++){
		std::cout<<"> ";std::cin>>y;
		if(y==0){
			break;
		}
		else{
			x[i]=y;
			tam+=1;
		}
	}
	
	std::cout<<"\nEl resultado es: "<<calcular->multiplicacion_de_N_numeros(x,tam);
}

//divide los numeros
void dividir(){
	double x[9999],tam=0,y;
	
	std::cout<<"\nDigite los numeros a dividir(*Digite el cero para salir*):\n";
	
	for(int i=0;;i++){
		std::cout<<"> ";std::cin>>y;
		if(y==0){
			break;
		}
		else{
			x[i]=y;
			tam+=1;
		}
	}
	
	std::cout<<"\nEl resultado es: "<<calcular->divicion_de_N_numeros(x,tam);
}