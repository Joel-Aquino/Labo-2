/*Resolucion de un triangulo oblicúangulo, segun los datos que se tengan
aplicando el TEOREMA DE COSENOS y la LEY DE SENOS*/
#include<cmath>
#include<iostream>
using namespace std;

int main(){
   	double lado1=0, lado2=0, lado3=0, angulo1=0, angulo2=0, angulo3=0;
   	double x;
   	double pi=3.14159265359,P=0;
  	cout<<"Que datos dispone del triangulo:"<<endl;	
	cout<<"1. Tres lados"<<endl;
   	cout<<"2. Dos lados y un angulo"<<endl;
	cout<<"3. Dos angulos y un lado"<<endl;
	cin>>x;
	cout<<":"<<x;
	
	if(x==1){
		cout<<"Dame los tres lados:"<<endl;
		cout<<"Lado1 ="<<endl;
		cin>>lado1;
		cout<<"Lado2 ="<<endl;
		cin>>lado2;
		cout<<"Lado3 ="<<endl;
		cin>>lado3;
		angulo3=acos((pow(lado2,2)+pow(lado3,2)-pow(lado1,2))/(2*lado2*lado3));
		angulo1=acos((pow(lado1,2)+pow(lado3,2)-pow(lado2,2))/(2*lado1*lado3));
		angulo2=acos((pow(lado1,2)+pow(lado2,2)-pow(lado3,2))/(2*lado1*lado2));
		P=(lado1+lado2+lado3)/(2);
		cout<<"El angulo1 es: \n"<<angulo1*(180/pi)<<endl;
		cout<<"El angulo2 es: \n"<<angulo2*(180/pi)<<endl;
		cout<<"El angulo3 es: \n"<<angulo3*(180/pi)<<endl;
		cout<<"El Area es: \n "<<sqrt((P)*(P-lado1)*(P-lado2)*(P-lado3))<<endl;
		cout<<"El perimetro de su triangulo es: \n"<<(lado1+lado2+lado3)<<endl;
			
	} else if (x==2){
		cout<<"Deme los dos lados y el angulo"<<endl;
		cout<<"Lado1="<<endl;
		cin>>lado1;
		cout<<"Lado2="<<endl;
		cin>>lado2;
		cout<<"angulo1="<<endl;
		cin>>angulo1;
		angulo3=asin((lado1*sin((angulo1)*(pi/180)))/(lado2));
		angulo2=((pi)-((angulo1)*(pi/180))-(angulo3));
		lado3=((lado2*sin(angulo2))/(sin((angulo1)*(pi/180))));
		cout<<"El angulo2 es: \n"<<angulo2*(180/pi)<<endl;
		cout<<"El angulo3 es: \n"<<angulo3*(180/pi)<<endl;
		cout<<"El lado3 es: \n"<<lado3<<endl;
		cout<<"El Area es: \n "<<((lado1*lado3*sin((angulo1)*(pi/180)))/(2))<<endl;
		cout<<"El perimetro de su triangulo es: \n"<<(lado1+lado2+lado3)<<endl;
		
	} else if (x==3){
		cout<<"Deme los dos angulos y el lado"<<endl;
		cout<<"angulo1="<<endl;
		cin>>angulo1;
		cout<<"angulo2="<<endl;
		cin>>angulo2;
		cout<<"Lado1="<<endl;
		cin>>lado1;
		angulo3=((pi)-((angulo1)*(pi/180))-((angulo2)*(pi/180)));
		lado2=((lado1*sin((angulo1)*(pi/180)))/(sin(angulo3)));
		lado3=((lado1*sin((angulo2)*(pi/180)))/(sin(angulo3)));
		cout<<"El angulo3 es: \n"<<angulo3*(180/pi)<<endl;
		cout<<"El lado2 es: \n"<<lado2<<endl;
		cout<<"El lado3 es: \n"<<lado3<<endl;
		cout<<"El Area es: \n "<<((lado1*lado3*sin((angulo1)*(pi/180)))/(2))<<endl;
		cout<<"El perimetro de su triangulo es: \n"<<(lado1+lado2+lado3)<<endl;
		
	}

	return 0;
}
//Fin del programa :D
