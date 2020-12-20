#pragma once
#include "gun.h"

class Pistol : public gun {
public:
	void sound() {
		cout << "(делает пиу)" << endl;
	}
};