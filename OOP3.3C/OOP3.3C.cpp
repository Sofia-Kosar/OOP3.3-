#include <iostream>
#include <Windows.h> 
#include "LongLong.h"


using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    LongLong A, B;
    cout << "������ �������� ��� ��'���� A:" << endl;
    cin >> A;
    cout << "������ �������� ��� ��'���� B:" << endl;
    cin >> B;

    cout << "A: " << A << endl;
    cout << "B: " << B << endl;

    LongLong C = A + B;
    cout << "A + B: " << C << endl;

    C = A * B;
    cout << "A * B: " << C << endl;

    if (A > B)
        cout << "A ����� B" << endl;
    else if (A < B)
        cout << "A ����� B" << endl;
    else
        cout << "A ������� B" << endl;

    if (A == B)
        cout << "A ������� B" << endl;
    else
        cout << "A �� ������� B" << endl;

    if (A >= B)
        cout << "A ����� ��� ������� B" << endl;

    if (A <= B)
        cout << "A ����� ��� ������� B" << endl;

    if (A != B)
        cout << "A �� ������� B" << endl;

    
    cout << "ʳ������ ��'���� ����� LongLong: " << LongLong::count() << endl;

    return 0;
}
