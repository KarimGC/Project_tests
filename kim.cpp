#include<iostream>
#include <locale>

using namespace std;

void display(bool language) {  //language 0=English 1=Spanish

    if (language == 0) {

        cout << "----------Welcome to the Translation Game----------" << endl;
        cout << "--------------Follow the instructions--------------" << endl;
        cout << "Match the words together." << endl;
        cout << "You'll be given 1 mark for each correct answer." << endl;
        cout << "Please press s to start the game" << endl;
        cout << "";
    }
    else if (language == 1) {

        cout << "----------Bienvenido al juego de traducci�n----------" << endl;
        cout << "--------------Sigue las instrucciones--------------" << endl;
        cout << "Elige la traducci�n correcta." << endl;
        cout << "Recibir�s 1 punto por cada respuesta correcta." << endl;
        cout << "Escribe s para iniciar el juego" << endl;
        cout << "";

    }
}


int playTranslation(int difficulty) { //Difficulty 0=easy 1=medium 2=hard
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
        cout << "(a) Mel�n (b) Meloso (c) Hueco (d) Mella" << endl;
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
        cout << "(a) Emoci�n (b) Rana (c) Trigo (d) Trillar" << endl;
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


int main()
{
    //setlocale(LC_ALL, "spanish");

    bool language = 0;
    int difficulty = 1;

    display(language);
    int finalResult = playTranslation(difficulty);

    if(language==0){
        cout << "Your final score is " << finalResult << endl;
    }
    else if (language == 1) {
        cout << "Tu puntuaci�n final es  " << finalResult << endl;
    }

    return 0;
}