class Calculadora{
	private:
		double x,y,resultado;
	public:
		//constructor
		Calculadora(){
			x=y=resultado=0;
		}
		
		//suma
		double suma_de_N_numeros(double _x[],int tam);
		
		//resta
		double resta_dos_numeros(double _x,double _y);
		double resta_de_N_numeros(double _x[],double tam);
		
		//divicion
		double divicion_de_dos_numeros(double _x,double _y);
		double divicion_de_N_numeros(double _x[],int tam);
		
		//multiplicacion
		double multiplicacion_de_dos_numeros(double _x,double _y);
		double multiplicacion_de_N_numeros(double _x[],int cant);
};