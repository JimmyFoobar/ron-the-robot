// RonRobot.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int addiere(int a, int b) {
	return a + b;
}
int dividieren(int a, int b) {
	return a - b;
}
int grenzwert(int punkte) {
	int max;
	max = ((punkte + 3) / 3) * 10;
	return max;
}
int rechne(int punkte) {
	int zzahl1, zzahl2, ergebnis, eingabe, min, max;
	max = grenzwert(punkte);
	min = max - 10;
	//printf("\n %i %i %i", max, min, punkte);
generator:
	srand(time(NULL));
	zzahl1 = rand() % max;
	zzahl2 = rand() % max;
	ergebnis = addiere(zzahl1, zzahl2);
	if (ergebnis <= max && ergebnis >= min) {
		printf("\n> OK, Was ergibt %i + %i?\n",  zzahl1, zzahl2);
		scanf_s("%i", &eingabe);
		ergebnis = addiere(zzahl1, zzahl2);
		if (ergebnis == eingabe) {
			punkte++;
			printf("\n> Richtig. Du hast jetzt %i Punkte", punkte);
		}
		else
			printf("\n> Leider nicht korrekt. %i + %i = %i", zzahl1, zzahl2, ergebnis);
		return punkte;
	}
	else
		goto generator;
}




int main() {

	char name[10];
	int weiter, punkte=0;
	//char weiter;
	printf("\n> Hallo ich bin Ron the Robot! \n> und wie heisst du?\n");
	gets_s(name);
	printf("\n> Hi %s schoen dich kennenzulernen.\n> Moechtest du mit mir addieren? (j/n)\n", name);
	//weiter = getchar();
	scanf("%i", &weiter);

	
	while (weiter==1) {
		punkte = rechne(punkte);
		printf("\n Mochtest du noch eine Aufgabe? (j/n)\n");
		//weiter = getchar();
		scanf("%i", &weiter);
	}
	printf("\n Good Bye");
}



// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
//Neu

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
