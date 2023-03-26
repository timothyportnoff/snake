#define LINUX
#define TIME __TIME__
#define DATE __DATE__
#define LINE __LINE__
#define VERS __cplusplus
#include <iostream>
#include </public/read.h>
#ifdef __gnu_linux__
#include <unistd.h>
#elif __windows__ 
#include <synchapi.h>
#endif
#include "snake.cc"

using std::cout;
using std::endl;
using std::flush;


class Snake {
	int length = 0;
	int x = 1;
	int y = 1;
	char head = '0';
	char body = 'o';
} player;

void draw_map();
void input();

bool game_over = 0;
constexpr int MAP_W = 30;
constexpr int MAP_H = 15;
int main() {
	cout << "hello world" << endl;
	while (1) {
		if (game_over == 1) break;
		draw_map();
		input();
#ifdef __gnu_linux__
		usleep(1'000'000);//1 seconds
#endif
	}
	cout << "GAME OVER" << endl;
	return 0;
}
void draw_map() {
	system("clear");
	for (int i = 0; i < MAP_H; i++) {
		for (int j = 0; j < MAP_W; j++) {
			if (i == 0) cout << '#';
			else if (j == 0) cout << '#';
			else if (i == MAP_H - 1) cout << '#';
			else if (j == MAP_W - 1) cout << '#';
			else { 
				cout << ' ';
			}
		}
		cout << "\n";
	}
	cout << flush;
	return;
}
void input() {
	//int x = getch()
	return;
}
