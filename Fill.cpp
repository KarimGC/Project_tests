#include "Fill.h"
#include <string>
#include <queue>
#include <iostream>
#include <locale>

using namespace std;

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