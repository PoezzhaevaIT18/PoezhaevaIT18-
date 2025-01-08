#include <iostream>
#include <Windows.h> 
#include "Header.h" // ���������� ������������ ����

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "������� n (������ 40): ";

    while (true) { // ����������� ���� ��� ��������� ����������������� �����
        cin >> n;
        if (cin.fail() || n <= 40) { // ���������, ��� ���� ��������� � n ������ 40
            cin.clear(); // ���������� ���� ������
            string m; // ���������� ��� �������� ���������� ������
            getline(cin, m); // ������ ���������� ������, ����� �������� ����
            cout << "������������ ����! ����������, ������� ����� ������ 40: ";
        }
        else {
            break;
        }
    }

    string r = powerOfTwoMinusOne(n);
    cout << "��������� 2^" << n << " - 1 = " << r << endl;

    return 0;
}
