#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TESTING
//#define CALCULATOR

void main()

{
	setlocale(LC_ALL, "Rus");
#ifdef TESTING
	int y = 0;
	int n = 0;
	int difficulty_level;
	cout << "Вопрос 1. В какой игре при выборе максимального уровня сложности враги начинают разговаривать на корейском, чтобы главный игрок не мог расслышать их переговоры? \n";
	cout << "Варианты ответа: \n";
	cout << "1. Crysis \n";
	cout << "2. Splinter Cell \n";
	cout << "3. Call of Duty \n";
	cout << "4. Max Payne \n";
	cout << "Ответ: ";
	cin >> difficulty_level;
	if (difficulty_level == 1)
	{
		cout << "Правильно" << endl;
		y++;
	}
	else
	{
		cout << "Не правильно" << endl;
		n++;
	}
	cout << "\n\n";
	int knee;
	cout << "Вопрос 2. Откуда пошла фраза о простреленном колене? \n";
	cout << "Варианты ответа: \n";
	cout << "1. The Elder Scrolls V: Skyrim \n";
	cout << "2. Dark Souls \n";
	cout << "3. Fable \n";
	cout << "4. The Elder Scrolls IV: Oblivion \n";
	cout << "Ответ: ";
	cin >> knee;
	if (knee == 1)
	{
		cout << "Правильно" << endl;
		y++;
	}
	else
	{
		cout << "Не правильно" << endl;
		n++;
	}
	cout << "\n\n";
	int weapon;
	cout << "Вопрос 3. В одной из серий игр есть оружие, которое из-за цензуры пришлось переименовать в «Bio Force Gun». О какой серии идёт речь? \n";
	cout << "Варианты ответа: \n";
	cout << "1. Dead Space \n";
	cout << "2. Doom \n";
	cout << "3. BioShock \n";
	cout << "4. Mass Effect \n";
	cout << "Ответ: ";
	cin >> weapon;
	if (weapon == 2)
	{
		cout << "Правильно" << endl;
		y++;
	}
	else
	{
		cout << "Не правильно" << endl;
		n++;
	}
	cout << "\n\n";
	int first_game;
	cout << "Вопрос 4. Вспомним старину. Самой первой доступной компьютерной видеоигрой была… \n";
	cout << "Варианты ответа: \n";
	cout << "1. Pac-Man \n";
	cout << "2. Space Invaders \n";
	cout << "3. Pong \n";
	cout << "4. Spacewar \n";
	cout << "Ответ: ";
	cin >> first_game;
	if (first_game == 4)
	{
		cout << "Правильно" << endl;
		y++;
	}
	else
	{
		cout << "Не правильно" << endl;
		n++;
	}
	cout << "\n\n";
	int game_character;
	cout << "Вопрос 5. В какой серии игр главный герой сначала был положительным, а затем стал отрицательным персонажем? \n";
	cout << "Варианты ответа: \n";
	cout << "1. Prototype \n";
	cout << "2. Mafia \n";
	cout << "3. Resident Evil \n";
	cout << "4. Serious Sam \n";
	cout << "Ответ: ";
	cin >> game_character;
	if (game_character == 1)
	{
		cout << "Правильно" << endl;
		y++;
	}
	else
	{
		cout << "Не правильно" << endl;
		n++;
	}
	cout << "\n\n";
	cout << "Правильных ответов:" << y << endl;
	cout << "Неправильных ответов:" << n << endl;
#endif // TESTING

#ifdef CALCULATOR
	double a, b, c;
	int z;
	cout << "Введите первое значение" << endl;
	cin >> a;
	cout << "Введите второе значение" << endl;
	cin >> b;
	cout << "Выберите действие: \n 1)+\n 2)-\n 3)*\n 4)/\n" << endl;
	cin >> z;
	if (z == 1)
	{
		c = a + b;
		cout << "a + b = " << c << endl;
	}
	if (z == 2)
	{
		c = a - b;
		cout << "a - b = " << c << endl;
	}
	if (z == 3)
	{
		c = a * b;
		cout << "a * b = " << c << endl;
	}
	if (z == 4)
	{
		c = a / b;
		cout << "a / b = " << c << endl;
	}
#endif // CALCULATOR

}