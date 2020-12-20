#pragma once

using namespace std;

class gun {
public:
	int damage=0;
	int aspd=0;
	double dMax() {
		int result = (60 / aspd) * damage;
		return(result);
	}

};

