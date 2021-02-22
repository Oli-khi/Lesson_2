#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "russian");

	 // Задание 1

	int i;
	char c1;
	long l;
	long long ll;
	float f;
	double d;
	bool b;


	// Задание 2

	enum XOSYMBOLS { right_diagonal_win = (char)47, left_diagonal_win = (char)92, horizontal_win = char(45), vertical_win = (char)124, left_player = (char)88, right_player = (char)79 };
	typedef enum XOSYMBOLS xosymbols;


	// Задание 3
	

	xosymbols xoarr[6];

	xoarr[0] = left_player;
	xoarr[1] = right_player;
	xoarr[2] = right_diagonal_win;
	xoarr[3] = left_diagonal_win;
	xoarr[4] = horizontal_win;
	xoarr[5] = vertical_win;


	// Задание 4

	enum COLOR { black, white, red, orange, yellow, green, blue, deepblue, violet };
	typedef enum COLOR Color;

	struct FIELD {

		int horizontal_lines_count;		// Кол-во горизонтальных линий в поле
		int vertical_lines_count;		// Кол-во вертикальных линий в поле
		int blocks_vertical_size;		// Вертикальный размер одной ячейки поля (в см)
		int blocks_horizontal_size;		// Горизонтальный размер одной ячейки поля (в см)
		int central_x;					// Координата центра поля по оси Х
		int central_y;					// Координата центра поля по оси Y
		Color background_color;			// Цвет заднего фона игрового поля
		Color line_color;				// Цвет линий игрового поля

										// Я не стал вставлять в это объединение массив символов т.к. 
										// он не входит в определение игрового поля, а скорей в параметры игроков или механики игры

	} xofield = { 2, 2, 3, 3, 20, 20, black, white };


	// Задание 5

	struct Task_5 {

		union types_union {

			int i;
			char c1;
			long l;
			long long ll;
			float f;
			double d;
			bool b;

		};

		int is_int : 1;
		int is_char : 1;
		int is_long : 1;
		int is_long_long : 1;
		int is_float : 1;
		int is_double : 1;
		int is_bool : 1;

	};


}