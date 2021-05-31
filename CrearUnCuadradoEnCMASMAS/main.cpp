#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
//Utilizaremos un metodo con parametros para dibujar un cuadrado 
void DibujarCuadrado (int b,int a){
/*
B y A es una carga de datos en las cuales la B es un contador 
de la cual la A es solo el dato para comparar B y A
Si B es mayor que A lo que hara es terminar 

*/
if (b>a){


/*
Entonces   solo aumentara el contador de B y quedara A
determinara la cantidad de filas
*/
}else {
DibujarCuadrado(b+1,a);

/*
Esto se le conoce como for anidado ya que hacemos que 
repita adentro de un ciclo, en este caso lo unico que va a comparar 
es  i sea menor a A y por lo tanto utilizara un contador
y comenzara hacer las columnas 

*/
for (int i=0 ; i<a;i++){
//mostrara un caracter de signo de gato
cout<<"*";



}
//deja un espacio 
cout<<"\n";



}



}
//Capturamos los datos con un metodo
void CapturaDatos(){
//Variable datos para almacenar datos de usuario
int datos;

cout<<"Introduce el numero largo del cuadrado "<<endl;
//Almacena datos
cin>>datos;
//En la segunda almacena datos  y el uno es para el contador de b
DibujarCuadrado(1,datos);


}




int main(int argc, char *argv[]) {
//Mandamos a llamar y listo
CapturaDatos();
	return 0;
}
