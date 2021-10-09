#include"Calculadora.h"
		
		//suma
		double Calculadora::suma_de_N_numeros(double _x[],int tam){//suma una cantidad inderterminda de numeros
			for(int i=0;i<tam;i++){
				resultado+=_x[i];
			}
			return resultado;
		}
		//resta
		double Calculadora::resta_dos_numeros(double _x,double _y){//resta un numero
			return _x-_y;
		}
		double Calculadora::resta_de_N_numeros(double _x[],double tam){//resta una cantidad inderterminda de numeros
			for(int i=0;i<tam;i++){
				if(i==0){
					resultado=_x[i];
				}
				else{
					resultado-=_x[i];
				}
			}
			return resultado;
		}
		//divicion
		double Calculadora::divicion_de_dos_numeros(double _x,double _y){//divide un numero
			return _x/_y;
		}
		double Calculadora::divicion_de_N_numeros(double _x[],int tam){//divide una cantidad inderterminda de numeros
			for(int i=0;i<tam;i++){
				if(i==0){
					resultado=_x[i];
				}
				else{
					resultado/=_x[i];
				}
			}
			return resultado;
		}
		//multiplicacion
		double Calculadora::multiplicacion_de_dos_numeros(double _x,double _y){//multiplica un numero
			return _x*y;
		}
		double Calculadora::multiplicacion_de_N_numeros(double _x[],int tam){//mutiplica una cantidad inderterminda de numeros
			resultado=1;
			for(int i=0;i<tam;i++){
				resultado*=_x[i];
			}
				
			return resultado;
		}