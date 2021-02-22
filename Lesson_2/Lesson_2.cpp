/*
1.Создать и инициализировать переменные пройденных типов данных
2.Создать перечисление с возможными вариантами символов для игры в крестики - нолики
3.Создать массив, способный содержать значения такого перечисления и инициализировать его.
4. * Создать структуру данных «Поле для игры в крестики - нолики» и снабдить его всеми необходимыми свойствами
5. ** Создать объединение и структуру с битовыми флагами указывающими какого типа значение в данный момент содержится в объединении
*/

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

	} xofield = { 2, 2, 3, 3, 20, 20, black, white };


	// Задание 5

}