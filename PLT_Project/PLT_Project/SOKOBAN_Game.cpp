#include <stdio.h>
#include <conio.h>
#include <windows.h>

const int g_numRows = 10;
const int g_numCols = 10;
int g_iplayerx = 1;
int g_iplayery = 1;

void ShowConsoleCursor(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO     cursorInfo;
	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}

void GotoXy(int x, int y)
{
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}//GotoXy()

void DrawBoard(int board[g_numRows][g_numCols])
{
	for (int r = 0; r < g_numRows; ++r) {
		for (int c = 0; c < g_numCols; ++c) {
			GotoXy(c, r);
			if (board[r][c] == 0)
				printf(".");
			else if (board[r][c] == 1)
				printf("#");
			else if (board[r][c] == 2)
				printf("N");
			else if (board[r][c] == 3)
				printf("P");
		}
	}
}

void DrawPlayer(int x, int y)
{
	GotoXy(x, y);
	printf("P");
}

void main()
{
	ShowConsoleCursor(false);

	int board[g_numRows][g_numCols] = {
		{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 1, 1, 1, 1, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	};

	DrawBoard(board);
	DrawPlayer(g_iplayerx, g_iplayery);

	while (true) {
		int tx = g_iplayerx;
		int ty = g_iplayery;

		// get key input
		int ch = _getch();
		// update player position
		// left
		if (ch == 'a' || ch == 'A' || ch == 75)
			tx = g_iplayerx - 1;
		// right
		else if (ch == 'd' || ch == 'D' || ch == 77)
			tx = g_iplayerx + 1;
		// up
		else if (ch == 'w' || ch == 'W' || ch == 72)
			ty = g_iplayery - 1;
		// down
		else if (ch == 's' || ch == 'S' || ch == 80)
			ty = g_iplayery + 1;
		// esc
		else if (ch == 27)
			break;

		//if ("만약 (tx,ty)위치가 벽이 아니면") {
		if (board[ty][tx] == 0) {
			g_iplayerx = tx;
			g_iplayery = ty;
		}

		// draw scene
		DrawBoard(board);
		DrawPlayer(g_iplayerx, g_iplayery);
	}
}
