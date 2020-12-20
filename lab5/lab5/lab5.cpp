#include <iostream>
#include "gun.h"
#include "knife.h"
#include "pistol.h"
#include "shop.h"


Shop shop;
using namespace std;
int main(){
	setlocale(LC_ALL, "rus");
	int n=0;
	shop.nInp(n);
	Knife* knife = new Knife[n];
	Pistol* pistol = new Pistol[n];
	setlocale(LC_ALL, "rus");
	shop.check(knife,pistol,5,n);
	cin >> n;
}

