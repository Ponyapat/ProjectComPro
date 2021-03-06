//ai from youtube and google

#include<iostream>
#include<string>
#include<stdio.h>

#ifndef board_h
#define board_h


using namespace std;

class Connect4
{
public:
	Connect4();
	~Connect4();

	void display() {
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 7; j++) {
				cout << "" << table[i][j];
				if (j < 8) {
					cout << "|";
				}
			}
			if (i < 7) {
				cout << endl << "---+---+---+---+---+---+---+" << endl;
			}else {
				cout << endl;
			}
		}
	}

void player(int col) {
		table[keep[col - 1]][col - 1] = name;
		keep[col - 1]--;
	}

	void computer(int col) {
		table[keep[col - 1]][col - 1] = Computer;
		keep[col - 1]--;
	}


	bool check_win() { // Check AI or Player win game
		for (int i = 6; i > 0; i--) { 
			for (int j = 0; j < 7; j++) {
				if (table[i][j] == table[i][j + 1] && table[i][j + 1] == table[i][j + 2] && table[i][j + 2] == table[i][j + 3] && table[i][j] != "   ") {
					if (table[i][j] == name) {
						cout << name << " Win!!!" << endl;
					}else if (table[i][j] == Computer) {
						cout << "AI Win!!!" << endl;
					}
					return true;
				}
				if (table[i][j] == table[i - 1][j] && table[i - 1][j] == table[i - 2][j] && table[i - 2][j] == table[i - 3][j] && table[i][j] != "   ") {
					if (table[i][j] == name) {
						cout << name << " Win!!!" << endl;
					}else if (table[i][j] == Computer) {
						cout << "AI Win!!!" << endl;
					}
					return true;
				}
				if (table[i][j] == table[i - 1][j + 1] && table[i - 1][j + 1] == table[i - 2][j + 2] && table[i - 2][j + 2] == table[i - 3][j + 3] && table[i][j] != "   ") {
					if (table[i][j] == name) {
						cout << name << " Win!!!" << endl;
					}else if (table[i][j] == Computer) {
						cout << "AI Win!!!" << endl;
					}
					return true;
				}
				if (table[i][j] == table[i - 1][j - 1] && table[i - 1][j - 1] == table[i - 2][j - 2] && table[i - 2][j - 2] == table[i - 3][j - 3] && table[i][j] != "   ") {
					if (table[i][j] == name) {
						cout << name <<" Win!!!" << endl;
					}else if (table[i][j] == Computer) {
						cout << "AI Win!!!" << endl;
					}
					return true;
				}
			}
		}
	}



private:string table[6][7];
		string name;
		string Computer;
		int keep[7] = { 5,5,5,5,5,5,5}; 
		
};



Connect4 :: Connect4()
{
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 7; j++) {
			table[i][j] = "   ";
		}
	}
	name = " X ";
	Computer = " O ";
}

Connect4 ::~Connect4()
{
}

#endif



