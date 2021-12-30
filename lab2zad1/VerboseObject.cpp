#include "VerboseObject.h"
#include <string>
#include <iostream>
using namespace std;

VerboseObject::VerboseObject(string name){
	this->name = name;
	cout << name << " constructed" << endl;
}


VerboseObject::~VerboseObject(){
	cout << name <<" destroyed" << endl;
}

void VerboseObject::saySomething(){
	cout << name << " says hello" << endl;
}
