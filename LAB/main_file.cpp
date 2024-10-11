#include <iostream>
#include "bringing_to_degree.h"
using namespace std;


int main() {
	bringing_to_degree a, b, c;
	b.Read();
	c = b.Power(b);
	c.Display();


	system("pause");
}