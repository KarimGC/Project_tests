#include<iostream>
#include <locale>
#include "Learning_Game.h"

using namespace std;

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


int Translation::playTranslation() { //Difficulty 0=easy 1=medium 2=hard
    char c;
    char option;
    int score = 0;

    cin >> c;

    if (c == 's' || c == 'S') {
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

    if (c == 's' || c == 'S') {
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

    if (c == 's' || c == 'S') {
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