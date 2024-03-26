#include <iostream>
#include <Windows.h> 
#include "LongLong.h"


using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    LongLong A, B;
    cout << "Введіть значення для об'єкту A:" << endl;
    cin >> A;
    cout << "Введіть значення для об'єкту B:" << endl;
    cin >> B;

    cout << "A: " << A << endl;
    cout << "B: " << B << endl;

    LongLong C = A + B;
    cout << "A + B: " << C << endl;

    C = A * B;
    cout << "A * B: " << C << endl;

    if (A > B)
        cout << "A більше B" << endl;
    else if (A < B)
        cout << "A менше B" << endl;
    else
        cout << "A дорівнює B" << endl;

    if (A == B)
        cout << "A дорівнює B" << endl;
    else
        cout << "A не дорівнює B" << endl;

    if (A >= B)
        cout << "A більше або дорівнює B" << endl;

    if (A <= B)
        cout << "A менше або дорівнює B" << endl;

    if (A != B)
        cout << "A не дорівнює B" << endl;

    
    cout << "Кількість об'єктів класу LongLong: " << LongLong::count() << endl;

    return 0;
}
