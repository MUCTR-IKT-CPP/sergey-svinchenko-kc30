#include <iostream>
#include "string"
#include "time.h"
#include "conio.h"

using namespace std;

class Kit {
public:
	string name;
	double weight=0;
	double fun=0;
	void play() {
		cout << "успех!" << endl;
	}
	void sleep() {
		cout << "ушел спать :(" << endl;
	}
};
class Pes {
public:
	string name;
	double weight=0;
	double fun=0;
	void play() {
		cout << "успех!" << endl;
	}
	void sleep() {
		cout << "ушел спать :(" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL) / 2);
	int n = rand() % 3 + 1;
	Kit** kit = new Kit * [n];
	for (int i = 0; i != n; i++) {
		Kit* kStat = new Kit;
		cout << "kit_" << i + 1 << ":" << endl;
		cin >> kStat->name;
		kStat->weight=rand()%100;
		kStat->fun= rand()%100;
		kit[i] = kStat;
		if (kit[i]->fun > 50) {
			cout << kit[i]->weight << endl << kit[i]->fun << endl;
			kit[i]->play();
			continue;
		}
		cout << kit[i]->weight << endl << kit[i]->fun << endl;
		kit[i]->sleep();
	}
	n = rand() % 3 + 1;
	Pes** pes = new Pes * [n];
	for (int i = 0; i != n; i++) {
		Pes* pStat = new Pes;
		cout << "pes_" << i + 1 << ":" << endl;
		cin >> pStat->name;
		pStat->weight= rand() % 100;
		pStat->fun= rand() % 100;
		pes[i] = pStat;
		if (pes[i]->fun > 50) {
			cout << pes[i]->weight << endl << pes[i]->fun << endl;
			pes[i]->play();
			continue;
		}
		cout << pes[i]->weight << endl << pes[i]->fun << endl;
		pes[i]->sleep();
	}
	delete[] kit; delete[] pes;
	_getch();
}

