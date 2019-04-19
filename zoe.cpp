#include <ncurses.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int ch, prev, row, col;
	prev = EOF;
	FILE *fp;
	int y, x;
	if (argc != 2)
	{
		printf("Usage: %s <a c file name>\n", argv[0]);
		exit(1);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		perror("Cannot open input file");
		exit(1);
	}
	initscr();
	getmaxyx(stdscr, row, col);
	while ((ch = fgetc(fp)) != EOF)
	{
		getyx(stdscr, y, x);
		if (y == (row-1))
		{
			attron(A_REVERSE);
			printw("< - Press Any Key - >");
			attroff(A_REVERSE);
			getch();
			clear();
			move(0, 0);
		}
		printw("%c", ch);
	}
	printw("<END>");
	getch();
	endwin();
	fclose(fp);
	return 0;
}
