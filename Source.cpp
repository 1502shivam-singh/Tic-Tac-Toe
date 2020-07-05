#include<iostream>

char P1[3][3] = { { '_','_','_' },{ '_','_','_' },{ '_','_','_' } };		//Empty array to store the X and Os  

void display_matrix();

int main()
{
	int i, n,j,m,c,win1=0,win2=0,p=0;
	std::cout << "\t\t" << "TIC-TAC-TOE\n";
	std::cout << "\tThis is a simple DOS based multiplayer game where two users can play X-O\nThis game has two players\n";
	std::cout << "\tPlayer-1, is assigned the O-character\n";
	std::cout << "\tPlayer-2 is assigned the X-character\n";
	std::cout << "\n\t\tHope you enjoy!!\n";
	for (c = 0;c < 9;c++)
	{
		std::cout << " \tEnter the number of the player playing\n";
		std::cin >> n;
		switch (n)
		{
		case 1:
			{
				std::cout << "Enter the cell to enter the O\n";
				std::cin >> j >> m;
				P1[j][m] = 'O';
				display_matrix(); {
					for (i = 0;i < 3;i++)
					{
						for (j = 0;j < 1;j++)
						{
							if ((P1[i][j] == 'O'&& P1[i][j + 1] == 'O') && (P1[i][j] == 'O'&&P1[i][j + 2] == 'O'))
							{
								win1++;
							}
							else
							{
								if ((P1[i][j] == 'X'&& P1[i][j + 1] == 'X') && (P1[i][j] == 'X'&&P1[i][j + 2] == 'X'))
								win2++;
							}
						}
					}
					if (win1 != 0) 
					{
						std::cout << "PLAYER-1 WINS!!!!\n";
						display_matrix();
						return 0;
					}
					else 
					{
						if (win2 != 0) 
						{
							std::cout << "PLAYER-2 WINS!!!!\n";
							display_matrix();
							return 0;
						}
						else
						{
							if (win2 == 0 && win1 == 0)
								p++;
						}
					}
					for (j = 0;j < 3;j++)
					{
						for (i = 0;i < 1;i++)
						{
							if ((P1[i][j] == 'O'&&P1[i + 1][j] == 'O') && (P1[i][j] == 'O'&&P1[i + 2][j] == 'O'))
							{
								win1++;
							}
							else
							{
								if ((P1[i][j] == 'X'&& P1[i + 1][j] == 'X') && (P1[i][j] == 'X'&& P1[i + 2][j] == 'X'))
									win2++;
							}

						}
					}
					if (win1 != 0) {
						std::cout << "PLAYER-1 WINS!!!!\n";
						display_matrix();
						return 0;
					}
					else {
						if (win2 != 0) {
							std::cout << "PLAYER-2 WINS!!!!\n";
							display_matrix();
							return 0;
						}
						else
						{
							if (win1 == 0 && win2 == 0)
							{
								p++;
							}
						}
					}
					for (i = 0;i < 1;i++)
					{
						if ((P1[i][i] == 'O'&& P1[i + 1][i + 1] == 'O') && (P1[i][i] == 'O'&& P1[i + 2][i + 2] == 'O'))
						{
							win1++;
						}
						else
						{
							if ((P1[i][i] == 'X'&& P1[i + 1][i + 1] == 'X') && (P1[i][j] == 'X'&& P1[i + 2][i + 2] == 'X'))
								win2++;
						}
					}
					if (win1 != 0) {
						std::cout << "PLAYER-1 WINS!!!!\n";
						display_matrix();
						return 0;
					}
					else {
						if (win2 != 0) {
							std::cout << "PLAYER-2 WINS!!!!\n";
							display_matrix();
							return 0;
						}
					}
					for (i = 2;i > 1;i--)
					{
						if ((P1[i][i] == 'O'&& P1[i - 1][i - 1] == 'O') && (P1[i][i] == 'O'&& P1[i - 2][i - 2] == 'O'))
						{
							win1++;
						}
						else
						{
							if ((P1[i][i] == 'X'&& P1[i - 1][i - 1] == 'X') && (P1[i][j] == 'X'&& P1[i - 2][i - 2] == 'X'))
							win2++;
						}
					}
					if (win1 != 0) {
						std::cout << "PLAYER-1 WINS!!!!\n";
						display_matrix();
						return 0;
					}
					else {
						if (win2 != 0) {
							std::cout << "PLAYER-2 WINS!!!!\n";
							display_matrix();
							return 0;
						}
						else
						{
							if (win1 == 0 && win2 == 0)
							{
								p++;
							}
						}
					}
				}
				break;
			}
		case 2:
			{
				std::cout << "Enter the cell to enter the X\n";
				std::cin >> j >> m;
				P1[j][m] = 'X'; {
					for (i = 0;i < 3;i++)
					{
						for (j = 0;j < 1;j++)
						{
							if ((P1[i][j] == 'O'&& P1[i][j + 1] == 'O') && (P1[i][j] == 'O'&&P1[i][j + 2] == 'O'))
							{
								win1++;
							}
							else
							{
								if ((P1[i][j] == 'X'&& P1[i][j + 1] == 'X') && (P1[i][j] == 'X'&&P1[i][j + 2] == 'X'))
									win2++;
							}
						}
					}
					if (win1 != 0) {
						std::cout << "PLAYER-1 WINS!!!!\n";
						display_matrix();
						return 0;
					}
					else {
						if (win2 != 0) {
							std::cout << "PLAYER-2 WINS!!!!\n";
							display_matrix();
							return 0;
						}
						else
						{
							if (win2 == 0 && win1 == 0)
								p++;
						}
					}
					for (j = 0;j < 3;j++)
					{
						for (i = 0;i < 1;i++)
						{
							if ((P1[i][j] == 'O'&&P1[i + 1][j] == 'O') && (P1[i][j] == 'O'&&P1[i + 2][j] == 'O'))
							{
								win1++;
							}
							else
							{
								if ((P1[i][j] == 'X'&& P1[i + 1][j] == 'X') && (P1[i][j] == 'X'&& P1[i + 2][j] == 'X'))
									win2++;
							}

						}
					}
					if (win1 != 0) {
						std::cout << "PLAYER-1 WINS!!!!\n";
						display_matrix();
						return 0;
					}
					else {
						if (win2 != 0) {
							std::cout << "PLAYER-2 WINS!!!!\n";
							display_matrix();
							return 0;
						}
						else
						{
							if (win1 == 0 && win2 == 0)
							{
								p++;
							}
						}
					}
					for (i = 0;i < 1;i++)
					{
						if ((P1[i][i] == 'O'&& P1[i + 1][i + 1] == 'O') && (P1[i][i] == 'O'&& P1[i + 2][i + 2] == 'O'))
						{
							win1++;
						}
						else
						{
							if ((P1[i][i] == 'X'&& P1[i + 1][i + 1] == 'X') && (P1[i][j] == 'X'&& P1[i + 2][i + 2] == 'X'))
								win2++;
						}
					}
					if (win1 != 0) {
						std::cout << "PLAYER-1 WINS!!!!\n";
						display_matrix();
						return 0;
					}
					else {
						if (win2 != 0) {
							std::cout << "PLAYER-2 WINS!!!!\n";
							display_matrix();
							return 0;
						}
					}
					for (i = 2;i > 1;i--)
					{
						if ((P1[i][i] == 'O'&& P1[i - 1][i - 1] == 'O') && (P1[i][i] == 'O'&& P1[i - 2][i - 2] == 'O'))
						{
							win1++;
						}
						else
						{
							if ((P1[i][i] == 'X'&& P1[i - 1][i - 1] == 'X') && (P1[i][j] == 'X'&& P1[i - 2][i - 2] == 'X'))
								win2++;
						}
					}
					if (win1 != 0) {
						std::cout << "PLAYER-1 WINS!!!!\n";
						display_matrix();
						return 0;
					}
					else {
						if (win2 != 0) {
							std::cout << "PLAYER-2 WINS!!!!\n";
							display_matrix();
							return 0;
						}
					}
						
							if (win1 == 0 && win2 == 0)
							{
								p++;
							}
						
					}
				display_matrix();
			}
		}
	}
	std::cout << "MATCH-TIED\n";
		
}
void display_matrix()
{
	int i = 0,j = 0;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			std::cout <<"\t"<< P1[i][j]<<"\t" ;
		}
		std::cout << "\n\n";
	}
}
