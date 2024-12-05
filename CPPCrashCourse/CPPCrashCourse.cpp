#include <iostream>
using namespace std;

enum EyeColor { Blue, Brown, Green, Gray };

// Functions

float sum(float a, float b);
void greet(string name, string country = "chile");

void celebrateBirthday(int* age);

int main()
{
    // Hello World
    // cout << "Welcome to console\n";
    
    // Variables
    /*
    int age = 30;
    float weigth = 80.25;
    double balance = 123123.294;
    char gender = 'M';
    string name = "Jose Torres";
    bool isWeekend = false;
        // string colors[3] = { "red", "white", "orange" };
        // string colors[3] = {  };
    string colors[] = { "red", "white", "orange" };
    */
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

    /*
    int week = 4;
    isWeekend = true;
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
    /*
    cout << "While: \n";
    int whileCounter = 20;

    while (whileCounter > 1) {
        cout << whileCounter << endl;
        whileCounter--;
    }

    cout << "DO While: \n";
    whileCounter = 20;
    do {
        cout << whileCounter << endl;
        whileCounter--;
    } while (whileCounter > 20);

    string animals[6] = { "cat", "dog", "bird", "fish", "bear", "Gecko" };

    for (int i = 0; i < 6; i++) {
        cout << animals[i] << endl;
    }
    */

    // Functions
    /*
    float result = sum(2.4, 4.6);
    cout << result << endl;

    greet("Jose", "Venezuela");

    */

    // Pointers
    int myAge = 20;
    celebrateBirthday(&myAge);
    cout << myAge << endl;

    system("pause>0");
}


float sum(float a, float b) {
    return a + b; 
}

void greet(string name, string country) {
    cout << name << ", soy de " << country << endl;
};

void celebrateBirthday(int* age) {
    (*age)++;
    cout << "Bday: " << *age << endl;
}