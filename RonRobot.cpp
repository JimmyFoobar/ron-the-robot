// RonRobot.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int addup(int a, int b) {
	return a + b;
}
int subtract(int a, int b) {
	return a - b;
}
int boundary(int score) {
	int max;
	max = ((score + 3) / 3) * 10;
	return max;
}
int calc(int score) {
	int rnum1, rnum2, result, input, min, max;
	max = boundary(score);
	min = max - 10;
	//printf("\n %i %i %i", max, min, score);
generator:
	srand(time(NULL));
	rnum1= rand() % max;
	rnum2 = rand() % max;
	result = addup(rnum1, rnum2);
	if (result <= max && result >= min) {
		printf("\n> OK, Was ergibt %i + %i?\n",  rnum1, rnum2);
		scanf_s("%i", &input);
		result = addup(rnum1, rnum2);
		if (result == input) {
			score++;
			printf("\n> Richtig. Du hast jetzt %i Punkte", score);
		}
		else
			printf("\n> Leider nicht korrekt. %i + %i = %i", rnum1, rnum2, result);
		return score;
	}
	else
		goto generator;
}




int main() {

	char name[10];
	int proceed, score=0;
	//char proceed;
	printf("\n> Hallo ich bin Ron the Robot! \n> und wie heisst du?\n");
	gets_s(name);
	printf("\n> Hi %s schoen dich kennenzulernen.\n> Moechtest du mit mir addieren? (j/n)\n", name);
	//proceed = getchar();
	scanf("%i", &proceed);

	
	while (proceed==1) {
		score = calc(score);
		printf("\n Mochtest du noch eine Aufgabe? (j/n)\n");
		//proceed = getchar();
		scanf("%i", &proceed);
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
