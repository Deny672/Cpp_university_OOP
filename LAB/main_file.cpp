#include <iostream>
#include "bringing_to_degree.h"
using namespace std;


int main() {
	bringing_to_degree a, b, c;
	b.Read();
	c = b.Degree(b);
	c.Display();


	system("pause");
}


//int main() {
//	bringing_to_degree a, b, c;
//	a = a.Init(2, 4);
//	a.Display();
//	b.Read();
//	b.Display();
//	c = a.Degree(b);
//	c.Display();
//
//
//	system("pause");
//}