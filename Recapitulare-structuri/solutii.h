#pragma once
#include "functii.h"
#include "structuri.h"
using namespace std;

void ex1() {
	//Strucutra melodie memoreaza numele si autorul melodiei, tara in care s-a lansat melodia, cel mai bun loc ocupat in topuri din tara de lansare ( loc_top) in anul precizat prin an_top.
	//Vectorul m memoreaza datele pentru 200 de melodii.
	//Scrie o secventa de instructiuni C++ care contine declaratii de variabile si instructiuni pentru determinarea si afisarea melodiilor din Top 3 in Romania in anul 2018.
	
	melodie a;
	a.nume = "Im Only Human";
	a.autor = "Rag'n'bone man";
	a.tara = "America";
	a.an_top = 2018;
	a.loc_top = 2;

	melodie b;	
	b.nume = "505";
	b.autor = "Artic Monkeys";
	b.tara = "Marea Britanie";
	b.an_top = 2018;;
	b.loc_top = 1;

	melodie c;
	c.nume = "Oblivion";
	c.autor = "Bastile";
	c.tara = "Marea Britanie";
	c.an_top = 2015;
	c.loc_top = 3;

	melodie d;
	d.nume = "Spring and a storm";
	d.autor = "Tally Hall";
	d.tara = "America";
	d.an_top = 2018;
	d.loc_top = 3;

	melodie e;
	e.nume = "The Real Slim Shady";
	e.autor = "Eminem";
	e.tara = "America";
	e.an_top = 2018;
	e.loc_top = 4;

	melodie f;
	f.nume = "Mockingbrid";
	f.autor = "Eminem";
	f.tara = "America";
	f.an_top = 2006;
	f.loc_top = 1;

	melodie mld[6] = { a,b,c,d,e,f };
	cout << "Inroduceti anul potrivit: " << endl;
	int x;
	cin >> x;

	top3MelodiiAnulX(mld, 6, x);
}
void ex2() {
	//Structura medalie memopreaza numele si judetul unui sportiv ce a obtinut medalie la o competitie. Campul medalie reprezinta denumirea medaliei (are una dintre valorile aur, argint, bronz). Campul an indica anul competitiei. Vectorul sp memoreaza datele pentru 500 de sportivi.
	//Scrie o secventa de instructiuni C++ care contine declaratii de variabile si instructiuni pentru determinarea si afisarea numarului de medalii de aur, numarului de medalii de argint si a numarului de medalii de bronz obtinute de sportivii din judetul Iasi in anul 2019.

	medalie a;
	a.nume = "Nicolaie";
	a.judet = "Alba";
	a.nume_medalie = "Aur";
	a.an = 2019;

	medalie b;
	b.nume = "Andrei";
	b.judet = "Ilfov";
	b.nume_medalie = "Argint";;
	b.an = 2009;

	medalie c;
	c.nume = "Ioana";
	c.judet = "Gorj";
	c.nume_medalie = "Argint";
	c.an = 2019;

	medalie d;
	d.nume = "Victor";
	d.judet = "Brasov";
	d.nume_medalie = "Bronz";
	d.an = 2019;

	medalie e;
	e.nume = "Denis";
	e.judet = "Ialomita";
	e.nume_medalie = "Bronz";
	e.an = 2019;

	medalie f;
	f.nume = "Muntean";
	f.judet = "Dolj";
	f.nume_medalie = "Aur";
	f.an = 2019;

	medalie mdl[6] = { a,b,c,d,e,f };

	nrMedaliiAnulx(mdl, 6, 2019);
}
void ex3() {
	//Structura data memoreaza o data calendaristica. Structura consultatie memoreaza numele unui pacient, cabinetul la care este programat pentru consultatie si data programata a consultatiei (data_cons).
	//Vectorul c memoreaza datele penru 100 de consultatii. Scrie o secventa de instructiuni C++ care contine declaratii de variabile si intructiuni pentru determinarea si afisarea numelor pacientilor programati pentru consultatii la cabinetul de stomatologie la data de 10 august 2019 si a numarului de pacienti programato la aceasta data.

}