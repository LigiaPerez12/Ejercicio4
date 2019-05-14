#include<iostream>
#include<conio.h>
using namespace std;
int sumar(int);
int main(){
	int nElementos;
	do{
		cout<<"Digite el numero de elementos"<<endl;
		cin>>nElementos;
	}while(nElementos <=0);
	
	cout<<"\nLa suma es: " <<sumar(nElementos)<<endl;
	
	getch();
	return 0;
}
//Funcion recursiva
int sumar(int n){
	int suma=0;
	
	if(n==1){//caso base
		suma =1;
	}
	else{//caso general
		suma=n+sumar(n-1);
	}
	return suma;
}
