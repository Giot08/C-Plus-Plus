#include <iostream>
using namespace std;

enum EyeColor { Blue, Brown, Green, Gray };

int main()
{
    // Hello World
    // cout << "Welcome to console\n";
    
    // Variables
    int age = 30;
    float weigth = 80.25;
    double balance = 123123.294;
    char gender = 'M';
    string name = "Jose Torres";
    bool isWeekend = false;
        // string colors[3] = { "red", "white", "orange" };
        // string colors[3] = {  };
    string colors[] = { "red", "white", "orange" };
    // cout << colors[0] + "\n";    
    // cin >> colors[0];
    // cout << colors[0] + "\n";

    // Control Flow
    /*
        if (isWeekend) {
            cout << "Be happy";
        }
        else {
            cout << "Dont be happy, go to work!";
        }
    */
    //// Ternario
    // isWeekend ? cout << "Be happy" : cout << "Dont be happy, go to work!";

    int week = 4;
    isWeekend = true;
    /*
        if (isWeekend && week == 4) {
            cout << "Fin de semana y con platita" << endl;
        }
        else if (!isWeekend && week < 4) {
            cout << "Seguir trabajando" << endl;
        }
        else {
            cout << "Que terrible semana nos espera" << endl;
        }
    */

    /*
    EyeColor eyeColor = Blue;
    switch (eyeColor)
    {
    case Blue:
        cout << "Blue eyes color" << endl;
        break;
    case Brown:
        cout << "Brown eyes color" << endl;
        break;
    case Green:
        cout << "Green eyes color" << endl;
        break;
    case Gray:
        cout << "Gray eyes color" << endl;
        break;
    default:
        cout << "Other eyes color" << endl;
        break;
    }
    */

    // Bucles














    system("pause>0");
}