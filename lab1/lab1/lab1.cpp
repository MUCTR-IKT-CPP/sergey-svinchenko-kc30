#include <iostream>
#include "time.h"
#include "windows.h"
#include "conio.h"

using namespace std;

int main()
{
    int arr[10][10];
    int over = 0; int under = 0;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    srand(time(NULL) / 2);
    for (int i = 0; i != 10; i++) {
        for (int j = 0; j != 10; j++) {
            arr[i][j] = rand() % 10;
            if (i<j) {
                over += arr[i][j];
            }
            if (i > j) {
                under += arr[i][j];
            }
            if (i == j) {
                SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
                cout << arr[i][j] << "  ";
                SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                continue;
            }
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    if (over > under) {
        cout << over - under << "  over win!";
    }
    else
    {
        cout << under - over<< "!   under win!";
    }
    _getch();
}
