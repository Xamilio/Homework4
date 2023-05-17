#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	double gb;
	double mbit;
	cout << "В гигабайтах(Gb):";
	cin >> gb;
	cout << "Скорость в мегабитах (Mbit/s):";
	cin >> mbit;
	gb = gb * 1024 * 8;
	gb /= mbit;
	int hours = gb / 3600;
	int min = gb / 60 - hours * 60;
	int sec = gb - min * 60 - hours * 3600;
	cout << hours << " h " << min << " min " << sec << " sec" << endl;

	cout << "\n\n\n\n";

	double R;
	const int mb = 760;
	cout << "Размер флешки: ";
	cin >> R;
	cout << "Вместится " << (int)(R * 1024 / mb) << " фильмов" << endl;\

	cout << "\n\n\n\n";

	double number;
	cout << "Число :";
	cin >> number;
	number = number * 100 + 0.5;
	number = (int)number;
	cout << endl << number / 100 << endl;

	cout << "\n\n\n\n";
	
	int s, n;
	cout << "Сдал: ";
	cin >> s;
	cout << "Несдал:  ";
	cin >> n;
	int p = s + n;
	cout << "Несдал " << n * 100 / p << "%" << endl;

}