//https://cs.nyu.edu/courses/fall16/CSCI-UA.0101-009/notes/Lecture12.pdf
#include"DLC.h"
#include <iostream>
#include <iomanip>
#include<ctime>
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h> 


using namespace std;

int main() {
	int choice;
	Connect4 t;
	string name1,name2;
	srand(time(0));
	int ch = rand() % 2 + 1;
	int check = 0;


	cout << "\n";
	cout << "\n";
	cout << setw(60) << "Welcome" << endl;
	cout << setw(60) << "To" << endl;
	cout << setw(60) << "CONNECT 4 Game" << endl;
	cout << "\n";
	cout << setw(60) << "XOXOXOX" << endl;
	cout << setw(60) << "OXOXOXO" << endl;
	cout << setw(60) << "XOXOXOX" << endl;
	cout << setw(60) << "OXOXOXO" << endl;
	cout << setw(60) << "XOXOXOX" << endl;
	cout << setw(60) << "OXOXOXO" << endl;
	cout << "\n";

	cout << setw(60) << "1. Player 1 vs Player 2" << endl;
	cout << setw(60) << "2. Player vs AI" << endl;
	cout << setw(60) << "3. Exit";
	cout << "\n";
	cout << "\n";
	
	cout << setw(60) << "Input your choice : ";
	cin >> choice;


	while (choice >= 3){
		cout << "Good Bye !?!" << endl;
		system("pause");
		break;
	}




	while (choice == 2) {
		cout << "bot" << endl;
		cout << "Enter your name : ";
		cin >> name1;

		int table[6][7] = {};
		do {
			cout << " 1   2   3   4   5   6   7" << endl;

			t.display();
			int colum;
			int check_choose = 0;
			if (ch == 1) {
				while (check_choose == 0) {
					cout << name1 << " Choose colum :";
					cin >> colum;

					if (colum < 1 || colum > 7) {
						cout << "Error, Choose again!!!" << endl;
						check_choose = 0;
					}else {
						check_choose = 1;
					}
				}
				t.player1(colum);
				ch++;
			}else if (ch == 2) {
				int n = rand() % 7 + 1;
				colum = n;
				cout << "AI choose colum: " << colum << endl;
				t.computer(colum);
				ch--;
			}

			if (t.check_win() == true) {
				check = 0;
				t.display();
			}
			else {
				check = 1;
			}
		} while (check == 1);
		cout << "End Game" << endl;
		system("pause");
		return 0;
	}


	while (choice == 1) {
		cout << "PVP" << endl;
		cout << "Enter Player 1 Name : ";
		cin >> name1;
		cout << "Enter Player 2 Name : ";
		cin >> name2;

		int table[6][7] = {};
		do {
			cout << " 1   2   3   4   5   6   7" << endl;

			t.display();
			int colum;
			int check_choose = 0;
			if (ch == 1) {
				while (check_choose == 0) {
					cout << name1 << " Choose colum :";
					cin >> colum;

					if (colum < 1 || colum > 7) {
						cout << "Error, Choose again!!!" << endl;
						check_choose = 0;
					}
					else {
						check_choose = 1;
					}
				}
				t.player1(colum);
				ch++;
			}
			else if (ch == 2) {
				while (check_choose == 0) {
					cout << name2 << " Choose colum :";
					cin >> colum;

					if (colum < 1 || colum > 7) {
						cout << "Error, Choose again!!!" << endl;
						check_choose = 0;
					}
					else {
						check_choose = 1;
					}
				}
				t.player2(colum);
				ch--;
			}

			if (t.checkplayer_win() == true) {
				check = 0;
				t.display();
			}
			else {
				check = 1;
			}
		} while (check == 1);
		cout << "End Game" << endl;
		system("pause");
		return 0;
	}

	
	
	return 0;
}






