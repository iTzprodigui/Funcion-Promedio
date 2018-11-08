#include <iostream>

using namespace std;

//Funcion
	double FP(double pc[]){
	double suma,promedio;
	for (int i=0; i<=9; i++){
	suma += pc[i];
	}
	promedio = (suma/10);
	return promedio; //extrae la funcion
}
//Fin Funcion

int main(){
double pc [10];

for (int i=0; i<=9;i++){
cout << "digite sus calificaciones" << endl;	
cin >> pc[i];
}

cout << "El promedio es: "<< FP(pc) << endl;

	system ("pause");
	return 0;
}


