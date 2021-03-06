
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

	void display(int row ,int column) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				cout << "" << table[row][column];
				if (j < column) {
					cout << "|";
				}
			}
			if (i < row) {
				cout << endl;
				for (int i = 0; i < column; i++){
					cout <<  "+---" ;
				}
				cout << endl;
				
			}
			else {
				cout << endl;
			}
		}
	}

	void player1(int col) {
		table[keep[col - 1]][col - 1] = name1;
		keep[col - 1]--;
	}

	void computer(int col) {
		table[keep[col - 1]][col - 1] = Computer;
		keep[col - 1]--;
	}

	void player2(int col) {
		table[keep[col - 1]][col - 1] = name2;
		keep[col - 1]--;
	}


	bool check_win() { // Check AI or Player win game
		for (int i = 6; i > n; i--) {
			for (int j = m; j < 7; j++) {
				if (table[i][j] != "   " && table[i][j] == table[i][j + 1] && table[i][j] == table[i][j + 2] && table[i][j] == table[i][j + 3]  ) { //  horizontal plane
					if (table[i][j] == name1) {
						cout << "Player Win!!!" << endl;
					}
					else if (table[i][j] == Computer) {
						cout << "AI Win!!!" << endl;
					}
					return true;
				}
				if (table[i][j] != "   " && table[i][j] == table[i - 1][j] && table[i][j] == table[i - 2][j] && table[i][j] == table[i - 3][j] ) {  //  vertical plane
					if (table[i][j] == name1) {
						cout << "Player Win!!!" << endl;
					}
					else if (table[i][j] == Computer) {
						cout << "AI Win!!!" << endl;
					}
					return true;
				}
				if (table[i][j] != "   " && table[i][j] == table[i - 1][j + 1] && table[i][j] == table[i - 2][j + 2] && table[i][j] == table[i - 3][j + 3] ) { //  "Backslash" diag
					if (table[i][j] == name1) {
						cout << "Player Win!!!" << endl;
					}
					else if (table[i][j] == Computer) {
						cout << "AI Win!!!" << endl;
					}
					return true;
				}
				if (table[i][j] != "   " && table[i][j] == table[i - 1][j - 1] && table[i][j] == table[i - 2][j - 2] && table[i][j] == table[i - 3][j - 3]) { //  "Forward slash" diag
					if (table[i][j] == name1) {
						cout << "Player Win!!!" << endl;
					}
					else if (table[i][j] == Computer) {
						cout << "AI Win!!!" << endl;
					}
					return true;
				}
			}
		}
	}


	bool checkplayer_win() { // Check Who win game
		for (int i = 6; i > n; i--) {
			for (int j = 0; j < m; j++) {
				if (table[i][j] == table[i][j + 1] && table[i][j + 1] == table[i][j + 2] && table[i][j + 2] == table[i][j + 3] && table[i][j] != "   ") { //  horizontal plane
					if (table[i][j] == name1) {
						cout << "Player 1 Win!!!" << endl;
					}
					else if (table[i][j] == name2) {
						cout << "Player 2 Win!!!" << endl;
					}
					return true;
				}
				if (table[i][j] == table[i - 1][j] && table[i - 1][j] == table[i - 2][j] && table[i - 2][j] == table[i - 3][j] && table[i][j] != "   ") { //  vertical plane
					if (table[i][j] == name1) {
						cout << "Player 1 Win!!!" << endl;
					}
					else if (table[i][j] == name2) {
						cout << "Player 2 Win!!!" << endl;
					}
					return true;
				}
				if (table[i][j] == table[i - 1][j + 1] && table[i - 1][j + 1] == table[i - 2][j + 2] && table[i - 2][j + 2] == table[i - 3][j + 3] && table[i][j] != "   ") { //  "Backslash" diag
					if (table[i][j] == name1) {
						cout << "Player 1 Win!!!" << endl;
					}
					else if (table[i][j] == name2) {
						cout << "Player 2 Win!!!" << endl;
					}
					return true;
				}
				if (table[i][j] == table[i - 1][j - 1] && table[i - 1][j - 1] == table[i - 2][j - 2] && table[i - 2][j - 2] == table[i - 3][j - 3] && table[i][j] != "   ") { //  "Forward slash" diag
					if (table[i][j] == name1) {
						cout << "Player 1 Win!!!" << endl;
					}
					else if (table[i][j] == name2) {
						cout << "Player 2 Win!!!" << endl;
					}
					return true;
				}
			}
		}
	}



private:string table[n][m];
		string name1;
		string Computer;
		string name2;
		int n, m;
		int keep[100] = {5,5,5,5,5,5,5,5,5,5};

};



Connect4::Connect4()
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			table[i][j] = "   ";
		}
	}
	name1 = " X ";
	Computer = " O ";
	name2 = " O ";
}

Connect4 ::~Connect4()
{
}

#endif


#pragma once
