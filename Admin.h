#pragma once
#include "Conference.h"

class Admin :public Conference {
	std::string FIO;
	std::string position;
	std::string responsibility;
public:
	Admin();
	Admin(std::ifstream& fin);
	~Admin();
	void edit();
	void save(std::ofstream& fout);
	void show(std::ostream& out);
};