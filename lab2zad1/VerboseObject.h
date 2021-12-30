#pragma once
#include <string>
using namespace std;

class VerboseObject{
private:
	string name;
public:
	VerboseObject(string name);
	~VerboseObject();
	void saySomething();
};

