#include <iostream>
#include <conio.h>

int const strLength = 20;
std::string str[20][20];

int posX, posY;

void PrintSreen(int x, int y) {
	system("cls");
	str[y][x] = "1";
	for (int i = 0; i < strLength; i++) {
		for (int j = 0; j < strLength; j++)
		{
			std::cout << str[i][j];
		}
		std::cout << "\n";
	}
}
void PrintSreen() {
	system("cls");
	for (int i = 0; i < strLength; i++) {
		for (int j = 0; j < strLength; j++)
		{
			std::cout << str[i][j];
		}
		std::cout << "\n";
	}
}

void ClearScreen() {
	for (int i = 0; i < strLength; i++) {
		for (int j = 0; j < strLength; j++)
		{
			str[i][j] = "0";

		}
	}
	PrintSreen();
}



void main() {
	posX, posY = 0;
	while (true) {
		ClearScreen();
		PrintSreen(posX, posY);

		std::string com;
		std::cin >> com;

		if (com != "") {
			if (com == "r") {
				if (posX < strLength) {
					posX++;
				}
			}
			if (com == "l") {
				if (posX != 0) {
					posX--;
				}
			}
			if (com == "w") {
				if (posX < 100) {
					posY--;
				}
			}
			if (com == "s") {
				if (posY != 100) {
					posY++;
				}
			}
		}

	}
}
