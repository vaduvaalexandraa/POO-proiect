#include<iostream>
#include "Eveniment.h"
#include "Bilet.h"
#include "Locatie.h"
using namespace std;
#pragma warning(disable:4996)


int main()
{
	//declarare de locatie
	Locatie l("Cinema", 3, 10);
	Locatie lo;
	//declarare de eveniment
	Eveniment e("Film", "12.12.2022", "20:20", 19, l);
	Eveniment lol;
	//ocuparea a doua locuri pt a testa functionalitatea setLocOcupat
	e.setLocOcupat(0,9);
	e.setLocOcupat(1, 9);
	lol=e;
	//afisare eveniment
	cout << lol;
	//declarare bilet
	Bilet bii;
	Bilet b("Standard",2,3, e);
	bii = b;
	//cout << b;
	//cin >> bii;
	//cin >> lol;
	//cout << lol;
	return 0;
}