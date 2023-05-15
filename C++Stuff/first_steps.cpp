#include <iostream>
using namespace std;

// comentario en línea
/* Comentario en bloque */


int main(){
	
// 01 - endl - salto de línea o bien \n
	cout<<"01 - Imprime por pantalla una frase: "<<endl;
	cout<< "Primer print de Svan S. Reilly en C++"<<endl<<endl;
		
	cout<<"\n__________________________________________________________\n";

// 02 - Tipos de datos básicos de C++
	cout<<"02 - Tipos de datos básicos de C++"<<endl<<endl;
	
	int number = 28;
	float simpleDecimal = 10.45;
	double complexDecimal = 16.3465;
	char character = 'A';
	
	cout<<number<<endl;
	cout<<simpleDecimal<<endl;
	cout<<complexDecimal<<endl;
	cout<<character<<endl;
	
	cout<<"\n__________________________________________________________\n";

// 03 - Lectura o entrada de datos
	cout<<"03 - Lectura o entrada de datos"<<endl<<endl;


	int insNumber;
	cout<<"Escriba un numero: ";
	cin>>number;
	
	cout<<"\nEl numero que escribio es: "<<number<<endl;

	cout<<"\n__________________________________________________________\n";

/* 04 - Escribe un programa que lea de la entrada estándar dos números y 
muestre en la salida estándar su suma, resta, multiplicación y división.*/


	cout<<"04 - Escribe un programa que lea de la entrada estandar dos numeros y"<<endl<<"muestre en la salida estandar su suma, resta, multiplicacion y division."<<endl<<endl;
	
	float firstNumber;
	float secondNumber;


	cout<<"Escriba el primer numero: ";
	cin>>firstNumber;
	cout<<"Escriba el segundo numero: ";
	cin>>secondNumber;
	
	float sumaResult = firstNumber + secondNumber;
	float restaResult = firstNumber - secondNumber;
	float multiResult = firstNumber * secondNumber;
	float divResult = firstNumber / secondNumber;
	
	cout<<"Los resultados requeridos con los numeros "<<firstNumber<< " y "<<secondNumber<< " son los siguientes: "<<endl
	<<"Suma: "<<sumaResult<<endl
	<<"Resta:"<<restaResult<<endl
	<<"Multiplicacion: "<<multiResult<<endl
	<<"Division: "<<divResult<<endl;
	
	cout<<"\n__________________________________________________________\n";

	
/* 05 - Realice un programa que lea de al entrada estandar los siguientes datos de una persona:

	Edad: dato de tipo entero.
	Sexo: deto de tipo caracter
	Altura (metros): dato de tipo real.

	Tras leer los datos, el programa debe mostrarlos en la salida estandar.*/
	
	cout<<"05 - Realice un programa que lea de al entrada estandar los siguientes datos de una persona: "<< endl<<endl;
	
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Escriba su edad: "; cin>>edad;
	cout<<"Escriba su sexo: "; cin>>sexo;
	cout<<"Escriba su altura en metros: "; cin>>altura;
	
	cout<<endl<<"Edad: "<< edad<<" year/s."<<endl<<"Sexo: "<< sexo<<endl<<"Altura (m): "<<altura;
	
	cout<<"\n__________________________________________________________\n";
	
	
/* 06 - *Escribe la expresion a/b + 1 como expresion en C++ */
	cout<<"06 - Escribe la siguiente expresion en C++ (a+b)/(c+d)"<< endl<<endl;
	
	float a, b, resultado = 0;
	
	cout<<"Escriba el valor de a: "; cin>>a;
	cout<<"Escriba el valor de b: "; cin>>b;
	
	resultado = (a/b) + 1;
	
	cout.precision(2);
	cout<<"El resultado es: "<< resultado<<endl;
	
	

	

	cout<<"\n__________________________________________________________\n";
	
	cout<<"07"<< endl<<endl;
	
	cout<<"\n__________________________________________________________\n";
	cout<<"08"<< endl<<endl;
	
	cout<<"09"<< endl<<endl;
	cout<<"\n__________________________________________________________\n";
	
	cout<<""<< endl;
	cout<<"\n__________________________________________________________\n";
	
	cout<<""<< endl;
	cout<<"\n__________________________________________________________\n";
	
	
	
	
	return 0;
}
