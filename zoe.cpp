#include <ncurses.h>

WINDOW *create_newwin(int height, int width, int startx, int starty);
void destroy_win(WINDOW *local_win);

int main(int argc, char *argv[])
{
	
	return 0;
}

WINDOW *create_newwin(int height, int width, int startx, int starty)
{
	WINDOW *local_win;
	local_win = newwin(height, width, startx, starty);
	box(local_win, 0, 0);
	wrefresh(local_win);
	return local_win;
}
void destory_win(WINDOW *local_win)
{
	wborder(local_win, )
}
