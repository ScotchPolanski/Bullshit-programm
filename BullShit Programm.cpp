#include <iostream>
#include <windows.h>

int main()
{
	int eingabe;
	char eingabe1;
	char shutdown;
	std::cout << "1: Kleines 1*1\n";
	std::cout << "2: Download Simulator\n";
	std::cout << "3: PC runterfahren\n";
	std::cout << "4: Programm schliessen\n";
	std::cin >> eingabe;



	if (eingabe == 1)
	{
		for (int a = 1; a < 11; a++)
		{
			for (int b = 1; b < 11; b++)
			{
				std::cout << a << "*" << b << "=" << a * b << std::endl;
			}
		}
		std::cout << "Fertig!\n";
		std::cout << "Fortfahren mit 2? (J/N) ";
		std::cin >> eingabe1;
		if (eingabe1 == 'J')
		{
			std::cout << "Downloade Daten...\n";
			Sleep(2000);
			for (int b = 0; b < 275; b++)
			{
				std::cout << "0xA6c" << b << std::endl;
				Sleep(20);
			}
			int b = 274;
			if (b == 274)
			{
				std::cout << "Download complete" << std::endl;
				Sleep(3000);
				system("cls");
				std::cout << "Virus installiert ;-)\n";
				Sleep(2000);
				std::cout << "Programm wird geschlossen\n";
				Sleep(2000);
				return 0;
			}
		}
		else
		{
			system("cls");
			std::cout << "Ungueltiger Wert!\n";
			Sleep(3000);
			std::cout << "______________\n";
			std::cout << "1: Kleines 1*1\n";
			std::cout << "2: Download Simulator\n";
			std::cout << "3: PC runterfahren\n";
			std::cout << "4: Programm schliessen\n";
			std::cin >> eingabe;
		}
	}

	if (eingabe == 3)
	{
		std::cout << "Bist du dir sicher dass du den Computer runterfahren moechtest? (J/N) \n";
		std::cin >> shutdown;
		if (shutdown == 'J')
		{
			std::cout << "PC wird in 20 heruntergefahren!\n";
			Sleep(3000);
			system("shutdown -s -t 20");
		}
		if (shutdown == 'N')
		{
			system("cls");
			std::cout << "Abbruch!\n";
			Sleep(3000);
			std::cout << "______________\n";
			std::cout << "1: Kleines 1*1\n";
			std::cout << "2: Download Simulator\n";
			std::cout << "3: PC runterfahren\n";
			std::cout << "4: Programm schliessen\n";
			std::cin >> eingabe;
		}
		if (shutdown != 'J' || 'N')
		{
			system("cls");
			std::cout << "Ungueltiger Wert!\n";
			Sleep(3000);
			std::cout << "______________\n";
			std::cout << "1: Kleines 1*1\n";
			std::cout << "2: Download Simulator\n";
			std::cout << "3: PC runterfahren\n";
			std::cout << "4: Programm schliessen\n";
			std::cin >> eingabe;
		}
	}

	if (eingabe == 2)
	{
		std::cout << "Downloade Daten...\n";
		Sleep(2000);
		for (int b = 0; b < 567; b++)
		{
			std::cout << "0xA6c" << b << std::endl;
			Sleep(20);
		}
		int b = 566;
		if (b == 566)
		{
			std::cout << "Download complete" << std::endl;
			Sleep(3000);
			system("cls");
			std::cout << "Virus installiert ;-)\n";
			Sleep(2000);
			std::cout << "Programm wird geschlossen\n";
			Sleep(2000);
			return 0;
		}
	}
	if (eingabe == 4)
	{
		return 0;
	}
	if (eingabe != 1 || 2 || 3 || 4)
	{
		system("cls");
		std::cout << "Ungueltiger Wert!\n";
		Sleep(3000);
		std::cout << "______________\n";
		std::cout << "1: Kleines 1*1\n";
		std::cout << "2: Download Simulator\n";
		std::cout << "3: PC runterfahren\n";
		std::cout << "4: Programm schliessen\n";
		std::cin >> eingabe;
	}
	if (eingabe1 != 'J' || 'N')
	{
		system("cls");
		std::cout << "Ungueltiger Wert!\n";
		Sleep(3000);
		std::cout << "______________\n";
		std::cout << "1: Kleines 1*1\n";
		std::cout << "2: Download Simulator\n";
		std::cout << "3: PC runterfahren\n";
		std::cout << "4: Programm schliessen\n";
		std::cin >> eingabe;
	}
}