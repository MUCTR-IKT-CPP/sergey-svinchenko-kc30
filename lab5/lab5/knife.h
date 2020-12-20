#pragma once
#include "gun.h"

class Knife : public gun {
public:
	void sound() {
		cout << "(делает фшух)" << endl;
	}
};