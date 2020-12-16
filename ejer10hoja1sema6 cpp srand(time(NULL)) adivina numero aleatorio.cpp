#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;

int validar()
{
	int n;
	cout << "ingrese numero"; cin >> n;
	while (0 > n || n > 100)
	{
		cout << "error,vuelva a ingresar numero de 1 a 100: " << endl;
		cin >> n;
	}
	return n;
}

int generaleatorio()
{
	int num;
	srand(time(NULL));
	num = 1 + rand() % 100;
	//variable=limite_inferior+rand()% limite superior+1-limite_inferior
	return num;
}

void reporte(int contador)
{
	if (contador == 1 || contador == 2 || contador == 3)
		cout << "fue pura suerte";
	if (contador == 4 || contador == 5 || contador == 6)
		cout << "eres bueno";
	if (contador == 7)
		cout << "no esta mal";
	if (contador == 8)
		cout << "se puede mejorar";
	if (contador > 8)
		cout << "que mal estas!!";
}
void juego()
{

	int num, Alea; int i = 1; int contador = 0;
	Alea = generaleatorio();
	//cout<<"el numero aleatorio es: "<<Alea<<endl;
	while (i <= 12)
	{
		num = validar();
		contador++;
		if (Alea < num)
			cout << "el numero es menor" << endl;
		if (Alea > num)
			cout << "el numero es mayor" << endl;
		if (Alea == num)
		{
			cout << "acertaste" << endl;
			reporte(contador);
			_getch();
			exit(0);

		}

		i++;
	}
	reporte(contador);
}
int main()
{
	juego();
	_getch();
}