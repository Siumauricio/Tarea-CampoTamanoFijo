#include <iostream>
#include <string>
#include <string.h>
#include "Person.h"
#include <fstream>
#include <sstream>
#include <regex>
#pragma warning(disable: 4996)
using namespace std;
int main () {
	Person p;
	p.ingresar ();
	p.Print ();
	p.Print2 ();
}

