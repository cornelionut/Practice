//#include<iostream>
//#include<istream>
//#include<fstream>
//#include<ostream>
//#include <conio.h>
//
//using namespace std;
////Să se realizeze un program care preia de la tastatură următoarele informaţii: nume,
////prenume, vârsta, adresă, telefonul unei persoane.După preluare, aceste informaţii trebuie afişate.
//
//
// class Persoana
//{
//private:
//	char* nume;
//	char* prenume;
//	int varsta;
//	char* adresa;
//	int telefon;
//
//
//public:
//
//	Persoana()
//	{
//		this->nume = new char(strlen("") + 1);
//		strcpy(this->nume, "");
//		this->prenume = new char(strlen("") + 1);
//		strcpy(this->prenume, "");
//		this->varsta = 0;
//		this->adresa = new char(strlen("") + 1);
//		strcpy(this->adresa, "");
//		this->telefon = 0;
//	}
//
//	 Persoana(char* nume, char* prenume, int varsta, char* adresa, int telefon)
//	{
//		 this->nume = new char(strlen(nume) + 1);
//		 strcpy(this->nume, nume);
//		 this->prenume = new char(strlen(prenume) + 1);
//		 strcpy(this->prenume, prenume);
//		 this->varsta = varsta;
//		 this->adresa = new char(strlen(adresa) + 1);
//		 strcpy(this->adresa, adresa);
//		 this->telefon = telefon;
//	}
//
//	
//
//	 friend istream &operator >>(istream &in, Persoana &p);
//	 friend ostream &operator <<(ostream &in, Persoana &p);
//};
//
// istream & operator >>(istream &in, Persoana &p)
// {
//	 cout << endl << "Nume:"; 
//	 in >> p.nume;
//	 cout << "Prenume:";
//	 in >> p.prenume;
//	 cout << "Varsta:";
//	 in >> p.varsta;
//	 cout << "Adresa:";
//	 in >> p.adresa;
//	 cout << "Telefon:";
//	 in >> p.telefon;
//
//	 return in;
// }
//
// ostream & operator <<(ostream &out, Persoana &p)
// {
//	 cout << endl << "\nNume:";
//	 out << p.nume;
//	 cout << "\nPrenume:";
//	 out << p.prenume;
//	 cout << "\nVarsta:";
//	 out << p.varsta;
//	 cout << "\nAdresa:";
//	 out << p.adresa;
//	 cout << "\nTelefon:";
//	 out << p.telefon;
//
//	 return out;
// }
//
//void main()
//{
//	Persoana p;
//	cin >> p;
//	cout << p;
//
//	
//
//}