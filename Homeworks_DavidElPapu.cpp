#include <iostream>
using namespace std;

void GuessMyNumber();

int main()
{
    int option = 0;
    cout << "Option:" << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        GuessMyNumber();
        break;
    default:
        cout << "Not valid option" << endl;
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
