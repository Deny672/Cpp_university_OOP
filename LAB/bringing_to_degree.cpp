#include "bringing_to_degree.h"
#include <iostream>
#include <math.h>
using namespace std;

bringing_to_degree bringing_to_degree::Init(double f, double s, double r)
{
    bringing_to_degree tmp;
    tmp.first = f;
    tmp.second = s;
    tmp.res = r;
    return tmp;
}
void bringing_to_degree::Read()
{
    cout << "input first" << endl;
    cin >> first;
    cout << "input second" << endl;
    cin >> second;
    cout << endl;
}
void bringing_to_degree::Display()
{
    cout << "res = " << res << endl;
}

bringing_to_degree bringing_to_degree::Degree(bringing_to_degree m) {
    bringing_to_degree temp{};

    // Перевірка на нульову основу і від'ємний показник (0^(-b) не визначене)
    if (m.first == 0 && m.second < 0) {
        throw ("Неможливо піднести нуль до від'ємного степеня.");
    }

    // Перевірка на від'ємну основу і дробовий показник (щоб уникнути комплексних чисел)
    if (m.first < 0 && m.second != static_cast<int>(m.second)) {
        throw ("Неможливо піднести від'ємне число до дробового степеня без комплексного результату.");
    }

    // Якщо перевірки пройдені, викликаємо pow()
    temp.res = std::pow(this->first, this->second);
    return temp;
}


//bringing_to_degree bringing_to_degree::Degree(bringing_to_degree m) {
//    bringing_to_degree temp{};
//    temp.res = pow(this->first, this->second);
//    return temp;
//}



//#include "bringing_to_degree.h"
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//bringing_to_degree bringing_to_degree::Init(double f, double s)
//{
//    bringing_to_degree tmp;
//    tmp.first = f;
//    tmp.second = s;
//    return tmp;
//}
//void bringing_to_degree::Read()
//{
//    cout << "input first" << endl;
//    cin >> first;
//    cout << "input second" << endl;
//    cin >> second;
//    cout << endl;
//}
//void bringing_to_degree::Display()
//{
//    cout << "first = " << first << "   " << "second = " << second << endl;
//}
//
//bringing_to_degree bringing_to_degree::Degree(bringing_to_degree m) {
//    bringing_to_degree temp{};
//    temp.first = this->first + m.first;
//    temp.second = this->second + m.second;
//    return temp;
//}

