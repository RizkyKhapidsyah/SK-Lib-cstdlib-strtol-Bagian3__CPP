#include <cstdlib>
#include <cstring>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    char* end;

    cout << "489bc" << " to Long Int with base-4 = " << strtol("489bc", &end, 4) << endl;
    cout << "End String = " << end << endl;

    cout << "123s" << " to Long Int with base-11 = " << strtol("123s", &end, 11) << endl;
    cout << "End String = " << end << endl;

    cout << "56xyz" << " to Long Int with base-36 = " << strtol("56xyz", &end, 36) << endl;

    _getch();
    return 0;
}