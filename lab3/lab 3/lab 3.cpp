#include <iostream>
#include "ctime"
#include "string"
#include "conio.h"

using namespace std;

struct Worker
{
	string name;
	string sex;
	int year;
};
void func(int& n, double& result, int& crutch, Worker *worker) {

	for (int i = 0; i != n; i++) {
		result += crutch - worker[i].year; //сюда можно также бахнуть простой массив
	}
}

void func(int& n, double& result, int& crutch, int *arr) {
	for (int i = 0; i != n; i++) {
		result += crutch - arr[i];
	}
}

int main()
{
	int n; double result = 0;
	srand(time(NULL) / 2);
	n = rand() % 5;
	int* arr = new int[n];
	int crutch = time(NULL) / 31536000 + 1970;
	Worker* worker = new Worker[n];
	for (int i = 0; i != n; i++) {
		cin >> worker[i].name;
		cin >> worker[i].sex;
		cin >> worker[i].year;
		arr[i] = worker[i].year;
	}
	//func(n, result, crutch, worker);
	func(n, result, crutch, arr);
	cout << endl << result / n;
	delete[] arr; delete[] worker;
	_getch();
}