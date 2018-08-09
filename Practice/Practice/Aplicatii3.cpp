//#include<iostream>
//
//using namespace std;
//
//
//class Lemon
//{
//private:
//	int nrLamai;  //una la fiecare limonada
//	int nrCuburiZahar; //2 la fiecare limondada indulcita
//	float sumaIncasari;
//
//public:
//
//	//public List<Lemon> peoples{ get; set; }
//
//
//
//	int getNrLamai()
//	{
//		return nrLamai;
//	}
//
//
//	int getCuburiZahar()
//	{
//		return nrCuburiZahar;
//	}
//
//	float getSumaIncasari()
//	{
//		return sumaIncasari;
//	}
//
//	Lemon()
//	{
//		this->nrLamai = 0;
//		this->nrCuburiZahar = 0;
//		this->sumaIncasari = 0.0f;
//	}
//
//	Lemon(int nrLamai, int nrCuburiZahar, float sumaIncasari)
//	{
//		this->nrLamai = nrLamai;
//		this->nrCuburiZahar = nrCuburiZahar;
//		this->sumaIncasari = sumaIncasari;
//	}
//
//	float getIncasari()
//	{
//
//	}
//
//};
//
//
//
//
//void main()
//{
//	int a;
//	int lamai = 5;
//	int zahar = 6;
//
//
//
//	cout << "----------------------- Meniu ---------------------- - ";
//	cout << "\n 1.O limonada indulcita";
//	cout << "\n 2.O limonada neindulcita";
//	cout << "\n 3.Afisare total incasari";
//	cout << "\n 4.Iesire";
//	cin >> a;
//
//
//
//	switch (a){
//		Lemon l;
//	case 1:
//		
//			Lemon l(1, 2, 14);
//			lamai--; zahar -= 2;
//
//		break;
//
//
//	case 2:
//		if (l.getNrLamai() > 0)
//		{
//			Lemon l1(1, 0, 14);
//			lamai--; zahar -= 0;
//		}
//		else{
//			cout << "Nu mai avem lamai sau zahar";
//		}
//		break;
//	case 3:
//		cout << "\nTotalul incasarilor este:";
//		break;
//
//	}
//
//}