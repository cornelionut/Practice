//#include<stdio.h>
//#include<iostream>
//
//using namespace std;
//
//long cmmdc(long a, long b)
//{
//	long c;
//	if (a==b) c = a;
//	else if (a > b) c = cmmdc(a - b, b);
//	else c = cmmdc(a, b - a);
//		return c;
//}
//
//
//float gasesteMIN(float v[], int *n)
//{
//	float c;
//	for (int i = 0; i < *n; i++)
//	{
//		c = v[0];
//		if (c > v[i])
//			c = v[i];
//	}
//	return c;
//}
//
//float sumaElementePozitive(float v[], int *n)
//{
//	float sum = 0.0f;
//	for (int i = 0; i < *n; i++)
//	{
//		if (v[i] > 0){
//			sum += v[i];
//		}
//	}
//	return sum;
//}
//
//float sumaVector(float v[], int * n)
//{
//	printf("Introduceti dim vectorului:"); scanf("%d", n);
//	for (int i = 0; i < *n; i++)
//	{
//		printf("\n v[%d]=", i); scanf("%f", &v[i]);
//	}
//
//	float sum = 0.0;
//	for (int i = 0; i < *n; i++)
//	{
//		sum += v[i];
//	}
//	return sum;
//}
//
//float* afiseazaVector(float v[],int *n)
//{
//	for (int i = 0; i < *n; i++ )
//	{
//		cout <<" "<< v[i];
//	}
//	return v;
//}
//
//float sumaElementeRangImpar(float v[], int *n)
//{
//	float sum = 0.0;
//	for (int i = 1; i < *n; i=i+2)
//	{
//		sum += v[i];
//	}
//	return sum;
//}
//
//
//void functiePolinom()
//{
//	int n;
//	float coef[100], x, val;
//	printf("Introduceti gradul polinomului:"); scanf("%d", &n);
//	printf("\nCoeficientii polinomului:");
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("\nCoeficientul lui x la puterea %d = ", i);
//		scanf("%f", &coef[i]);
//	}
//	printf("\nPunctul in care se va calcula valoarea:"); scanf("%f", &x);
//	val = coef[n];
//	for (int i = n; i>0; i--)
//	{
//		val = val*x + coef[i - 1];
//	}
//	printf("\nValoarea polinomului in punctul %5.2f este %5.2f", x, val);
//}
//
//
//void primaAparitieInVector()
//{
//	int n,a;
//	float v[100];
//	printf("Dimensiunea:"); scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("v(%d)= ",i); scanf("%d", &v[i]);
//	}
//	printf("Introduceti val cautata:"); scanf("%d", &a);
//	
//	for (int i = 0; i < n;i++)
//	{
//		if (v[i] == a){
//			printf("Prima apartitie a valorii %d este pe pozitia %d ", a, i);
//		}
//	}
//}
//
//
//void main()
//{
//	/*float v[100];
//	int n;
//	cout <<"\n Suma elementelor este:" << sumaVector(v, &n);
//	cout << "\n Afiseaza vector";
//	afiseazaVector(v, &n);
//
//	cout<<"\n Suma elemente rang impar:" << sumaElementeRangImpar(v,&n);*/
//
//	primaAparitieInVector();
//
//
//}
