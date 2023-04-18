#include <iostream>
using namespace std;

void GuessMyNumber();
void Tarea1();
void Tarea1Ej1();
void Tarea1Ej2();
void Tarea1Ej3();
void Tarea1Ej4();
void Tarea1Ej5();
void RPSgameMenu();
void RPSgame();

int main()
{
    int option = 0;
    string lectureTime = "a";

    while (option != 4)
    {
        system("cls");
        cout << "Main Options:" << endl;
        cout << "1)GuessMyNumber" << endl;
        cout << "2)Tarea 1" << endl;
        cout << "3)RPSgame" << endl;
        cout << "4)Salir" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            GuessMyNumber();
            break;
        case 2:
            Tarea1();
            break;
        case 3:
            RPSgameMenu();
            break;
        case 4:
            break;
        default:
            cout << "Please write a valid option" << endl;
            cout << "(Write anything to continue)" << endl;
            cin >> lectureTime;
            break;
        }
    }
}

void RPSgame()
{
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    int secretNumber = (randomNumber % 3) + 1;
    string computerMove = "Rock";
    char playerMove = 'a';
    int round = 1;
    int computerWins = 0;
    int playerWins = 0;
    string lectureTime = "a";
    int result = 0;
    //0 es empate, 1 es que ganamos, y -1 que perdemos
    
    while (computerWins < 2 && playerWins < 2)
    {
        randomNumber = rand();
        secretNumber = (randomNumber % 3) + 1;
        if (secretNumber == 1)
        {
            computerMove = "Rock";
        }
        else if (secretNumber == 2)
        {
            computerMove = "Paper";
        }
        else
        {
            computerMove = "Scissors";
        }
        while (playerMove != 'R' && playerMove != 'P' && playerMove != 'S')
        {
            system("cls");
            cout << "ROUND " << round << endl;
            cout << "Player: " << playerWins << endl;
            cout << "Computer: " << computerWins << endl;
            cout << "My move is: " << computerMove << endl;
            cout << endl;
            cout << "Choose your move" << endl;
            cout << "R) Rock" << endl;
            cout << "P) Paper" << endl;
            cout << "S) Scissors" << endl;
            cin >> playerMove;
            if (playerMove != 'R' && playerMove != 'P' && playerMove != 'S')
            {
                cout << "Please make a valid move" << endl;
                cout << "(Write anything to continue)" << endl;
                cin >> lectureTime;
            }
        }
        switch (playerMove)
        {
        case 'R':
            if (computerMove == "Rock")
            {
                result = 0;
            }
            else if (computerMove == "Paper")
            {
                result = -1;
            }
            else
            {
                result = 1;
            }
            break;
        case 'P':
            if (computerMove == "Rock")
            {
                result = 1;
            }
            else if (computerMove == "Paper")
            {
                result = 0;
            }
            else
            {
                result = -1;
            }
            break;
        case 'S':
            if (computerMove == "Rock")
            {
                result = -1;
            }
            else if (computerMove == "Paper")
            {
                result = 1;
            }
            else
            {
                result = 0;
            }
            break;
        default:
            cout << "..." << endl;
            break;
        }

        if (result == 0)
        {
            cout << "Tie, no points for anyone" << endl;
        }
        else if (result == 1)
        {
            cout << "Player wins, +1" << endl;
            playerWins += 1;
        }
        else
        {
            cout << "Computer wins, +1" << endl;
            computerWins += 1;
        }
        cout << "(Write anything to continue)" << endl;
        cin >> lectureTime;
        round += 1;
        playerMove = 'a';
    }
    system("cls");
    if (playerWins == 2)
    {
        cout << "Player Wins!!" << endl;
    }
    else
    {
        cout << "Computer Wins!!" << endl;
    }
    cout << "(Write anything to continue)" << endl;
    cin >> lectureTime;
}

void RPSgameMenu()
{
    int op = 0;
    string lectureTime = "a";
    while (op != 2)
    {
        system("cls");
        cout << "Welcome to the rock, paper, scissors game!" << endl;
        cout << endl;
        cout << "1) Play" << endl;
        cout << "2) Leave" << endl;
        cin >> op;
        if (op == 1)
        {
            RPSgame();
        }
        else if (op == 2)
        {
            cout << "Adios my friend" << endl;
        }
        else
        {
            cout << "Please write a valid option" << endl;
            cout << "(Write anything to continue)" << endl;
            cin >> lectureTime;
        }
    }
}

void Tarea1Ej1()
{
    float num = 0;
    cout << "Detector de numeros positivos o negativos" << endl;
    cout << "Escriba su numero" << endl;
    cin >> num;
    if (num < 0)
    {
        cout << "Su numero es negativo" << endl;
    }
    else if (num > 0)
    {
        cout << "Su numero es positivo" << endl;
    }
    else
    {
        cout << "Su numero es cero" << endl;
    }
}

void Tarea1()
{
    int option = 0;

    cout << "Tarea 1 Options:" << endl;
    cout << "1)Ejercicio 1" << endl;
    cout << "2)Ejercicio 2" << endl;
    cout << "3)Ejercicio 3" << endl;
    cout << "4)Ejercicio 4" << endl;
    cout << "5)Ejercicio 5" << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        Tarea1Ej1();
        break;
    case 2:
        //Tarea1Ej2();
        break;
    case 3:
        //Tarea1Ej3();
        break;
    case 4:
        //Tarea1Ej4();
        break;
    case 5:
        //Tarea1Ej5();
        break;
    default:
        cout << "Not a valid option" << endl;
        break;
    }
}

void GuessMyNumber()
{
    srand(static_cast<unsigned int>(time(0)));
    //srand(time(NULL));
    int randomNumber = rand();
    int secretNumber = (randomNumber % 200) + 1;
    int guess;
    int tries = 0;
    int veryClose;

    cout << "GUESS MY NUMBER" << endl;
    cout << "Adivina el número en el menor número de intentos posible." << endl;

    //Depurar
    cout << secretNumber;
    do
    {
        cout << "\nEnter a guess (1-200):" << endl;

        cin >> guess;
        tries++;

        veryClose = secretNumber - guess;

        if (veryClose <= 5 && veryClose >= -5 && veryClose != 0)
        {
            cout << "Muy cerca!!\n";
        }

        if (guess > secretNumber) {
            cout << "Muy Alto\n\n";
        }
        else if (guess < secretNumber) {
            cout << "Muy Bajo\n\n";
        }
        else {
            cout << "Excelente lo hiciste en -- " << tries << "-- intentos";

        }
    } while (guess != secretNumber);
}
