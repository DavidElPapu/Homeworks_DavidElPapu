#include <iostream>
using namespace std;

void GuessMyNumber();
void Tarea1();
void Tarea1Ej1();
void Tarea1Ej2();
void Tarea1Ej3();
void Tarea1Ej4();
void Tarea1Ej5();

int main()
{
    int option = 0;

    while (option != 3)
    {
        cout << "Main Options:" << endl;
        cout << "1)GuessMyNumber" << endl;
        cout << "2)Tarea 1" << endl;
        cout << "3)Salir" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            GuessMyNumber();
            break;
        case 2:
            Tarea1();
            break;
        default:
            cout << "Not a valid option" << endl;
            break;
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
