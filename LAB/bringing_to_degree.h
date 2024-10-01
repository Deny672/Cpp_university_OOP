#pragma once

struct bringing_to_degree {
	double first;
	double second;
	double res;
	bringing_to_degree Init(double f, double s, double r);
	void Read();
	void Display();
	bringing_to_degree Degree(bringing_to_degree m);
};


//struct bringing_to_degree {
//	double first;
//	double second;
//	bringing_to_degree Init(double f, double s);
//	void Read();
//	void Display();
//	bringing_to_degree Degree(bringing_to_degree m);
//};