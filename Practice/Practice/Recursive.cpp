#include<iostream>

using namespace std;

int suma(int n)
{
	if (n == -1)
		return 0;
	else
		return n + suma(n - 1);
}

int factorial(int n)
{
	if (n <= 1)
		return 1;
	else 
		return (n * factorial(n - 1));
}

void cuvantInversat()
{
	char cuvant;
	cin.get(cuvant); cout << cuvant;
	if (cuvant != '\n')
		cuvantInversat();
	cout << cuvant;
}

void main()
{
	//------------------------------------------ FUNCTII RECURSIVE ------------------------------------------

	//SUMA NUMERELOR NATURALE 
	int n;
	printf("Introduceti dimensiunea:"); scanf("%d", &n);
	cout << "\nSuma este:" << suma(n);
	cout << "\nFactorialul este:" << factorial(n);

	//INVERSARE CUVANT
	/*cout << "\nCuvantul:";
	cuvantInversat();*/


}