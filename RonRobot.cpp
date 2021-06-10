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

int main() {
	char name[10];
	printf("\n> Hallo ich bin Ron the Robot! \n> und wie heisst du?\n");
	gets_s(name);
	printf("\n> Hi %s schoen dich kennenzulernen.\n> Moechtest du mit mir addieren?\n", name);
	int zzahl1, zzahl2,ergebnis, eingabe;
	srand(time(NULL));
	zzahl1 = rand() % 10;
	zzahl2 = rand() % 10;
	printf("\n> OK, %s Was ergibt %i + %i?\n", name, zzahl1, zzahl2);
	scanf_s("%i", &eingabe);
	ergebnis = addiere(zzahl1, zzahl2);
	if (ergebnis == eingabe)
		printf("\n> Richtig");
	else
		printf("\n> Leider nicht korrekt. %i + %i = %i", zzahl1, zzahl2, ergebnis);
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
