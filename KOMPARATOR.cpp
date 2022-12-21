#include <iostream>
#include <string>
#include <windows.h>
#include <string>
#include <algorithm>
using namespace std;



void komparator() {

komparator:
float x;
float y;
float z;
system("CLS");
cout << "Komparator" << "\n";
cout << "--------------------" << "\n";
cout << "Zadejte 3 hodnoty (po sobe)" << "\n";
cin >> x >> y >> z;



if((x > y) && (x > z)) {
cout << x << " je nejvetsi";
}
if((y > x) && (y > z)) {
cout << y << " je nejvetsi";
}

if((z > y) && (z > x)) {
cout << z << " je nejvetsi";
}



if((x == y) || (x == z) || (y == z)) {
cout << "Zadali jste stejna cisla";
Sleep(1500);
goto komparator;
}

}

void komparatorsrovnani() {
komparator:
float x;
float y;
float z;

system("CLS");
cout << "Komparator" << "\n";
cout << "--------------------" << "\n";
cout << "Zadejte 3 hodnoty (po sobe)" << "\n";
cin >> x >> y >> z;



if(x < y) {
swap(x, y);
}

if(x < z) {
swap(y, x);
}
if(z < y) {
swap(z, x);
}

cout << "Srovnane cisla " << x << " " << y << " " << z;

}



void mocniny() {
float x=1;
float y=1;
float z=1;

system("CLS");
cout << "Mocniny" << "\n";
cout << "Zadej mocnenec: ";
cin >> x;
cout << "Zadej mocnitel: ";
cin >> y;

for(int i = 1; i <= y; i++) {
z=z*x;
}

cout << z;

}



void hodnataswap() {
float x;
float y;
float mezi;

system("CLS");
cout << "Prohdim hodnotu" << "\n";
cout << "--------------------" << "\n";
cout << "Zadej hodnotu X: ";
cin >> x;
cout << "Zadejte hodnotu Y: ";
cin >> y;
cout << "Hodnota X je " << x << "\nHodnota Y je " << y << "\nChcete prohodit hodnoty? \n";

mezi = x;
x = y;
y = mezi;

cout << "Hodnota X je " << x << "\nHodnota Y je " << y << "\n";

}



void hodnotaswap2() {
float x;
float y;

system("CLS");
cout << "Prohdim hodnotu" << "\n";
cout << "--------------------" << "\n";
cout << "Zadej hodnotu X: ";
cin >> x;
cout << "Zadejte hodnotu Y: ";
cin >> y;
cout << "Hodnota X je " << x << "\nHodnota Y je " << y << "\nChcete prohodit hodnoty? \n";

swap(x,y);
cout << "Hodnota X je " << x << "\nHodnota Y je " << y << "\n";

}



void stringcount() {
string s;
int pocet = 0;

system("CLS");
cout << "Spocitam string" << "\n";
cout << "--------------------" << "\n";
cout << "Zadej hodnotu stringu: ";
cin >> s;

for(int i = 0; s[i];i++) {
pocet++;
}

cout << pocet;

}



int main() {
int volba;

system("CLS");
cout << "Multi-blaznostvi - fakt super" << "\n";
cout << "--------------------" << "\n";
cout << "1) Komparator" << "\n";
cout << "2) Komparator bonus" << "\n";
cout << "3) Mocniny" << "\n";
cout << "4) Prohozeni hodnoty (3 promenne)" << "\n";
cout << "5) Prohozeni hodnoty (2 promenne)" << "\n";
cout << "6) String count" << "\n";
cout << "--------------------" << "\n";
cout << "Co si prejes?" << "\n";
cin >> volba;

switch(volba) {

case 1:
komparator();
return 0;
break;

case 2:
komparatorsrovnani();
return 0;
break;

case 3:
mocniny();
return 0;
break;

case 4:
hodnataswap();
return 0;
break;

case 5:
hodnotaswap2();
return 0;
break;

case 6:
stringcount();
return 0;
break;

    }

}

