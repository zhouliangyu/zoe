#include <ncurses.h>

int main()
{
	int ch;
	initscr();
	raw();
	noecho();
	keypad(stdscr, TRUE);
	printw("Please type");
	attron(A_BOLD);
	while (TRUE)
	{
		ch = getch();
		if (ch == KEY_F(1))
		{
			printw("Break");
			break;
		}
		printw("%c", ch);
		mvaddch(5,5,','|A_UNDERLINE);
		refresh();
	}
	attroff(A_BOLD);
	endwin();
}