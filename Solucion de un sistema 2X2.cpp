//Solucion de uns sistema de ecuaciones 2*2 por el metodo de determinantes
#include<iostream>
using namespace std;
int main (){
	double a1,b1,c1,a2,b2,c2;//Variables del sistema
	double Dx,Dy,Ds,X,Y;//Variables que seran calculadas
	cout<<"Ingrese los valores de los coeficientes del sistema\n";
	cout<<"a1=";cin>>a1;//para pedir el valor de a1
	cout<<"b1=";cin>>b1;//para pedir el valor de b1
	cout<<"c1=";cin>>c1;//para pedir el valor de c1
	cout<<"a2=";cin>>a2;//para pedir el valor de a2
	cout<<"b2=";cin>>b2;//para pedir el valor de a2
	cout<<"c2=";cin>>c2;//para pedir el valor de a2
	//Escribimos la forma en la que hallamos la solución
	    Ds=(a1*b2)-(a2*b1);//Para hallar el det. del sistema
	    Dx=(c1*b2)-(c2*b1);//Para hallar el det. de X
		Dy=(a1*c2)-(a2*c1);//Para hallar el det. de Y
	if (Ds==0){//Condicion cuando el det. del sistema valga cero
		cout<<"El sistema tiene infinitas soluciones"<<endl;
	} else{//Cuando el det. del sistema sea distinto de cero
		X=(Dx/Ds);//para hallar el valor de X
		Y=(Dy/Ds);//para hallar el valr de Y
		cout<<"La solucion del sistema es:" "X="<< X << " ; " "Y="<<Y <<endl;
		
	} 
		return 0;//Para una buena practica
	}
//Fin del programa :D
	
