#include <string>
#include <queue>
#include <iostream>
#include <locale>

#include "Learning_Game.h"

using namespace std;

ScoreTracker::ScoreTracker(string userNameEnt) {
	username = userNameEnt;
}

void ScoreTracker::ScoreEntry(int scoreEnt) {
	if (scores.empty()) {
		scores.push(-99);
	}

	scores.push(scoreEnt);
}

void ScoreTracker::SetUserName(string userNameEnt) {
	username = userNameEnt;
}

void ScoreTracker::PrintTrackedScore() {
	cout << username << "'s scores: " << endl;
	while (!scores.empty()) {
		if (scores.front() == -99) {
			scores.pop();
		}
		else {
			cout << "Score " << cout << ": " << scores.front() << endl;
			scores.pop();
			cnt++;
		}

	}
}

void Translation::display(bool language) {  //language 0=English 1=Spanish

    if (language == 0) {

        cout << "----------Welcome to the Translation Game----------" << endl;
        cout << "--------------Follow the instructions--------------" << endl;
        cout << "Match the words together." << endl;
        cout << "You'll be given 1 mark for each correct answer." << endl;
        cout << "Please press s to start the game" << endl;
        cout << "";
    }
    else if (language == 1) {

        cout << "----------Bienvenido al juego de traducción----------" << endl;
        cout << "--------------Sigue las instrucciones--------------" << endl;
        cout << "Elige la traducción correcta." << endl;
        cout << "Recibirás 1 punto por cada respuesta correcta." << endl;
        cout << "Escribe s para iniciar el juego" << endl;
        cout << "";

    }
}

int Translation::playTranslation(int difficulty) { //Difficulty 0=easy 1=medium 2=hard
    char c;
    char option;
    int score = 0;

    cin >> c;

    if ((c == 's' || c == 'S') && difficulty == 0) {
        cout << "Gato" << endl;
        cout << "(a) Cat (b) Dog (c) Bird (d) Fish" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Maiz" << endl;
        cout << "(a) Starch (b) Corn (c) Pepper (d) Cabbage" << endl;
        cin >> option;
        if (option == 'b' || option == 'B') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Easy" << endl;
        cout << "(a) Facil (b) Mas o menos (c) Duro (d) Gato" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Night" << endl;
        cout << "(a) Dia (b) Dias (c) Noche (d) Tarde" << endl;
        cin >> option;
        if (option == 'c' || option == 'C') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Oscuro" << endl;
        cout << "(a) White (b) Ligero (c) light (d) Dark" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }
    }

    if ((c == 's' || c == 'S') && difficulty == 1) {
        cout << "Repentino" << endl;
        cout << "(a) Represent (b) Delayed (c) Sudden (d) Fast" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Mad" << endl;
        cout << "(a) Mal (b) Molesto (c) Sudden (d) Fast" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Dormir" << endl;
        cout << "(a) Stand (b) Lay down (c) Sit (d) Sleep" << endl;
        cin >> option;
        if (option == 'd' || option == 'D') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Breeze" << endl;
        cout << "(a) Brita (b) Brisa (c) Corredor (d) Verter" << endl;
        cin >> option;
        if (option == 'b' || option == 'B') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Olla" << endl;
        cout << "(a) Pot (b) Hello (c) Sudden (d) Fast" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }
    }

    if ((c == 's' || c == 'S') && difficulty == 2) {
        cout << "Crowd" << endl;
        cout << "(a) Multitud (b) Multiplicar (c) Malta (d) Cuervo" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }


        cout << "Mellow" << endl;
        cout << "(a) Melón (b) Meloso (c) Hueco (d) Mella" << endl;
        cin >> option;
        if (option == 'b' || option == 'B') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Queue" << endl;
        cout << "(a) Cuchara (b) Cuello (c) Cola (d) Cuaderno" << endl;
        cin >> option;
        if (option == 'C' || option == 'c') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Thrill" << endl;
        cout << "(a) Emoción (b) Rana (c) Trigo (d) Trillar" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Digress" << endl;
        cout << "(a) Degollar (b) Cavar (c) Degustar (d) Divagar" << endl;
        cin >> option;
        if (option == 'd' || option == 'D') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }
    }

    return score;
}

UserProfile::UserProfile() : language(0), score(0) {}

UserProfile::UserProfile(const std::string& name, int score) {
    this->name = name;
    this->score = score;
}

const std::string& UserProfile::getName() const {
    return name;
}

bool UserProfile::getLanguage() {
    return language;
}

int UserProfile::getScore() {
    return score;
}

void UserProfile::setName(const std::string& name) {
    this->name = name;
}

void UserProfile::setLanguage(bool lan) {
    language = lan;
}

void UserProfile::setScore(int score) {
    this->score = score;
}

void Fill::display(bool language) {

    if (language == 0) {

        cout << " ----------------------Welcome to Filling in the Blank Game--------------------" << endl;
        cout << " -------------------------Follow the instrucutions-----------------------------" << endl;
        cout << "Fill in the blank." << endl;
        cout << "You will be given 1 point for each correct answer" << endl;
        cout << "Please press S to start the game" << endl;
        cout << "";
    }

    else if (language == 1) {

        cout << "----------------------Bienvenido a Rellenar el espacio en blanco--------------------" << endl;
        cout << " -------------------------Siga las instrucciones-----------------------------" << endl;
        cout << "Rellene el espacio en blanco" << endl;
        cout << "Se le dará 1 punto por cada respuesta correcta" << endl;
        cout << "Pulsa S para iniciar el juego" << endl;
        cout << "";
    }
}

int Fill::playTranslation(int difficulty) {
    char c;
    char option;
    int score = 0;

    cin >> c;

    if ((c == 's' || c == 'S') && difficulty == 0) {
        cout << "We usually walk the dog in the ____" << endl;
        cout << "(a) phone (b) car (c) park (d) tree" << endl;
        cin >> option;
        if (option == 'c' || option == 'C') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "There are so many ________ in this soup" << endl;
        cout << "(a) potatoes (b) fork (c) spoon (d) bowl" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "The exercise wasn’t difficult. We did it ______" << endl;
        cout << "(a) easy (b) medium (c) hard (d) easily" << endl;
        cin >> option;
        if (option == 'd' || option == 'D') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "I have been living in Thailand _____ 1999" << endl;
        cout << "(a) at (b) since (c) in (d) for" << endl;
        cin >> option;
        if (option == 'b' || option == 'B') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Hay que calentar la sopa, ____ fría (está) esta estar es" << endl;
        cout << "(a) está (b) esta (c) estar (d) es" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }
    }

    if ((c == 's' || c == 'S') && difficulty == 1) {
        cout << "Yo ___ estudiante de universidad (soy) somos son ser" << endl;
        cout << "(a) son (b) soy (c) somos (d) ser" << endl;
        cin >> option;
        if (option == 'b' || option == 'B') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Estoy __ el cine (en) los encima sobre" << endl;
        cout << "(a) sobre (b) encima (c) los (d) en" << endl;
        cin >> option;
        if (option == 'd' || option == 'D') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Pon la comida _____ la mesa." << endl;
        cout << "(a) sobres (b) sabré (c) sobre (d) bajo" << endl;
        cin >> option;
        if (option == 'c' || option == 'C') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Los peces ___ están nadando son míos." << endl;
        cout << "(a) quieren (b) que (c) querer (d) si" << endl;
        cin >> option;
        if (option == 'b' || option == 'B') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "¿Tienes ____ a mano para escribir?" << endl;
        cout << "(a) algo (b) tiempo (c) nada (d) alguna" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }
    }

    if ((c == 's' || c == 'S') && difficulty == 2) {
        cout << "Laura no es española ____ colombiana (sino) que si tambien" << endl;
        cout << "(a) tambien (b) que (c) sino (d) si" << endl;
        cin >> option;
        if (option == 'c' || option == 'C') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }


        cout << "_______ exercise, you must diet if you want to loose weight." << endl;
        cout << "(a) for (b) besides (c) even (d) with" << endl;
        cin >> option;
        if (option == 'b' || option == 'B') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "I'm going to bed, Bill ____." << endl;
        cout << "(a) saw (b) see (c) said (d) tell" << endl;
        cin >> option;
        if (option == 'C' || option == 'c') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Compramos los platos __ el mercado (en) los al donde" << endl;
        cout << "(a) en (b) los (c) al (d) donde" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Invité a Mario a la fiesta, ____ no puede venir (pero) para por sobre" << endl;
        cout << "(a) sobre (b) por (c) para (d) pero" << endl;
        cin >> option;
        if (option == 'd' || option == 'D') {
            score = score + 1;
        }
        else {
            score = score + 0;
        }
    }

    return score;
}