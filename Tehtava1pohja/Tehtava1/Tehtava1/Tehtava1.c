// Tehtava1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "stdafx.h"

// globaalit muuttujat
char nimi[21], puskuri[21];
int ika;

void kysyNimi()
{
	printf(" Anna nimesi ");

}
void kysyIka()
{
	printf(" Anna ik�si ");

}
void tulostaNimi()
{
	printf(" Nimi: %s ", nimi);
}
void tulostaIka()
{
	printf(" Ik�: %d ", ika);

}


void tulostaValikko()
{
	char v;
	do
	{
		system("cls");
		printf("-----------------------Sy�tt�/Tulostus-testaus----------------------------------");
		printf("\n\n\n\n");
		printf("\t\t\t\tKysy nimi\t\t1");
		printf("\n\t\t\t\tKysy ik�\t\t2");
		printf("\n\t\t\t\tTulosta nimi\t\t3");
		printf("\n\t\t\t\tTulosta ik�\t\t4");
		printf("\n\t\t\t\tLopetus\t\t\t5");
		printf("\n\n\n\t\t\t\tValitse: ");
		v = getchar();
		//getch(); // kulutetaan enterin painallus
		switch (v) {
		case '1': 	kysyNimi();
			break;
		case '2': 	kysyIka();
			break;
		case '3':   tulostaNimi();
			break;
		case '4': 	tulostaIka();
			break;
		case '5': break;

		}
	} while (v != '5');
}

void main()
{
	tulostaValikko();
}


