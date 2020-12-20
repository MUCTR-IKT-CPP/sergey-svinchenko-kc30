#include <iostream>
#include "conio.h"
#include "time.h"

using namespace std;

void func(double** A,double** B, double** C, int &N) {
    cout << "C:" << endl;
    for (int i = 0; i != N; i++) {
        for (int j = 0; j != N; j++) {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << "    ";
        }
        cout << endl;
    }
}

int main()
{
    srand(time(NULL) / 2);
    int N;
    cout << "enter N" << endl;
    cin >> N;
    double** A = new double* [N];
    double** B = new double* [N];
    double** C = new double* [N];
    for (int i = 0; i != N; i++) {
        A[i] = new double[N];
        B[i] = new double[N];
        C[i] = new double[N];
    }
    cout << "A:" << endl;
    for (int i = 0; i != N; i++) {
        for (int j = 0; j != N; j++) {
            A[i][j] = rand() % 11;
            cout << A[i][j] << "    ";
        }
        cout << endl;
    }
    cout << "B:" << endl;
    for (int i = 0; i != N; i++) {
        for (int j = 0; j != N; j++) {
            B[i][j] = rand() % 11;
            cout << B[i][j] << "    ";
        }
        cout << endl;
    }
    func(A, B, C, N);
    for (int i = 0; i != N; i++) {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }
    _getch();
}
