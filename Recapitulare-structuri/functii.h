#pragma once
#include"structuri.h"
using namespace std;

void sortareMelodii(melodie mld[], int d) {
	bool aff = true;
	do {
		aff = true;
		for (int i = 0; i < d; i++) {
			if (mld[i].loc_top > mld[i + 1].loc_top) {
				melodie aux = mld[i];
				mld[i] = mld[i + 1];
				mld[i + 1] = aux;
				aff = false;
			}
		}
	}while (aff == false);
}
void top3MelodiiAnulX(melodie mld[], int d, int x) {
	sortareMelodii(mld, d);
	int ctr = 0;
	for (int i = 0; i < d && ctr < 3; i++) {
		if (mld[i].an_top == x) {
			cout << "Melodia " << mld[i].nume << " de la " << mld[i].autor << " din tara " << mld[i].tara << " pe locul " << mld[i].loc_top << endl;
			ctr++;
		}
	}
}
void nrMedaliiAnulx(medalie mdl[], int d, int x) {
	int medaliiAur = 0;
	int medaliiArgint = 0;
	int medaliiBronz = 0;
	for (int i = 0; i < d; i++) {
		if (mdl[i].an == x) {
			if (mdl[i].nume_medalie == "Aur") {
				medaliiAur++;
			}
			if (mdl[i].nume_medalie == "Argint") {
				medaliiArgint++;
			}
			if (mdl[i].nume_medalie == "Bronz") {
				medaliiBronz++;
			}
		}
	}
	cout << "Numarul de medalli de aur in anul " << x << " este: " << medaliiAur << endl;
	cout << "Numarul de medalli de argint in anul " << x << " este: " << medaliiArgint << endl;
	cout << "Numarul de medalli de bronz in anul " << x << " este: " << medaliiBronz << endl;
}