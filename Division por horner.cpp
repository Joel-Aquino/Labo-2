//Division de polinomios por el método de HORNER
//Se alicara el método para divisores de 2do grado (ax^2+bx+c) 
#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double A, B, C, D, E, F;//variables para el dividendo
	double x;
	double a, b, c;//variables para el divisor de la forma (ax^2+bx+c)
	double c1, c2, c3, c4;//variables para calcular el cociente
	double r1, r2;//variables para calcular el residuo
	cout<<"De que grado es su dividendo?"<<endl;
	cout<<"1. 5to grado (Ax^5+Bx^4+Cx^3+Dx^2+Ex+F)"<<endl;
	cout<<"2. 4to grado (0x^5+Bx^4+Cx^3+Dx^2+Ex+F)"<<endl;
	cout<<"3. 3er grado (0x^5+0x^4+Cx^3+Dx^2+Ex+F)"<<endl;
	cout<<"4. 2do grado (0x^5+0x^4+0x^3+Dx^2+Ex+F)"<<endl;
	cin>> x;
	cout<<":"<<x;
	
	 if (x==1){  //Cuando el dividendo sa de 5to grado
	 	cout<<"Deme los coeficientes de su polinomio"<<endl;
	 	cout<<"A="; cin>>A; 
	 	cout<<"B="; cin>>B;
	 	cout<<"C="; cin>>C;
	 	cout<<"D="; cin>>D;
	 	cout<<"E="; cin>>E;
	 	cout<<"F="; cin>>F;
	 	cout<<"Deme los coeficientes de su divisor"<<endl;
	 	cout<<"a="; cin>>a;
	 	cout<<"b="; cin>>b;
	 	cout<<"c="; cin>>c;
	 	c1=(A)/(a);
	 	c2=(B+(c1*(-b)))/(a);
	 	c3=(C+(c1*(-c))+(c2*(-b)))/(a);
	 	c4=(D+(c2*(-c))+(c3*(-b)))/(a);
	 	r1=(E+(c3*(-c))+(c4*(-b)));
	 	r2=(F+(c4*(-c)));
	 	cout<<"El cociente de su division tiene la forma (c1x^3+c2x^2+c3x+c4)"<<endl;
	 	cout<<"Cuyos coeficienes son:""c1="<<c1<<";""c2="<<c2<<";""c3="<<c3<<";""c4="<<c4<<endl;
	 	cout<<"El resto de su division tiene la forma (r1x+r2)"<<endl;
	 	cout<<"Cuyos coeficientes son:""r1="<<r1<<";""r2="<<r2;
	 	
	 } else if (x==2){  //Cuando el dividendo sa de 4to grado
	 	cout<<"Deme los coeficientes de su polinomio"<<endl; 
	 	cout<<"B="; cin>>B;
	 	cout<<"C="; cin>>C;
	 	cout<<"D="; cin>>D;
	 	cout<<"E="; cin>>E;
	 	cout<<"F="; cin>>F;
	 	cout<<"Deme los coeficientes de su divisor"<<endl;
	 	cout<<"a="; cin>>a;
	 	cout<<"b="; cin>>b;
	 	cout<<"c="; cin>>c;
	 	c1=(B)/(a);
	 	c2=(C+(c1*(-b)))/(a);
	 	c3=(D+(c1*(-c))+(c2*(-b)))/(a);
	 	r1=(E+(c2*(-c))+(c3*(-b)));
	 	r2=F+(c3*(-c));
	 	cout<<"El cociente de su division tiene la forma (c1x^2+c2x+c3)"<<endl;
	 	cout<<"Cuyos coeficienes son:""c1="<<c1<<";""c2="<<c2<<";""c3="<<c3<<endl;
	 	cout<<"El resto de su division tiene la forma (r1x+r2)"<<endl;
	 	cout<<"Cuyos coeficientes son:""r1="<<r1<<";""r2="<<r2;
	 	
	 } else if(x==3){  //Cuando el dividendo sa de 3er grado
	 	cout<<"Deme los coeficientes de su polinomio"<<endl; 
	 	cout<<"C="; cin>>C;
	 	cout<<"D="; cin>>D;
	 	cout<<"E="; cin>>E;
	 	cout<<"F="; cin>>F;
	 	cout<<"Deme los coeficientes de su divisor"<<endl;
	 	cout<<"a="; cin>>a;
	 	cout<<"b="; cin>>b;
	 	cout<<"c="; cin>>c;
		c1=(C)/(a);
		c2=(D+(c1*(-b)))/(a);
		r1=(E+(c1*(-c))+(c2*(-b)));
		r2=(F+(c2*(-c)));
	 	cout<<"El cociente de su division tiene la forma (c1x+c2)"<<endl;
	 	cout<<"Cuyos coeficienes son:""c1="<<c1<<";""c2="<<c2<<endl;
	 	cout<<"El resto de su division tiene la forma (r1x+r2)"<<endl;
	 	cout<<"Cuyos coeficientes son:""r1="<<r1<<";""r2="<<r2;
	 	
	 } else if(x==4){  //Cuando el dividendo sa de 2do grado
	 	cout<<"Deme los coeficientes de su polinomio"<<endl; 
	 	cout<<"D="; cin>>D;
	 	cout<<"E="; cin>>E;
	 	cout<<"F="; cin>>F;
	 	cout<<"Deme los coeficientes de su divisor"<<endl;
	 	cout<<"a="; cin>>a;
	 	cout<<"b="; cin>>b;
	 	cout<<"c="; cin>>c;
	 	c1=(D)/(a);
	 	r1=(E+(c1*(-b)));
	 	r2=(F+(c1*(-c)));
	 	cout<<"El cociente de su division es una constante (c1)"<<endl;
	 	cout<<"Cuyo valor es:""c1="<<c1<<endl;
	 	cout<<"El resto de su division tiene la forma (r1x+r2)"<<endl;
	 	cout<<"Cuyos coeficientes son:""r1="<<r1<<";""r2="<<r2;
	 	
	 }
	return 0;
}
//Fin del programa
