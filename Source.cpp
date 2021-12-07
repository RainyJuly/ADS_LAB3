#include <iostream>
#include <conio.h>
#include <string>
#include "class_list_but_vector.cpp"
using std::cin;
using std::cout;

size_t select_start(){
	cout << "Select index of the first element:";
	size_t start;
	cin >> start;
	return start;
}
size_t select_stop(){
	cout << "Select index of the last element:";
	size_t stop;
	cin >> stop;
	return stop;
}
double Get_Delem(){
	double elem;
	for (;;){
		std::cout << "Your elem:";
		cin >> elem;
		if (std::cin.fail()){
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Enter the double number!" << "\n";
			system("pause");
			cout << "\n";
		}
		else break;
	}
	return elem;
}
int Get_Ielem(){
	int elem;
	for (;;){
		std::cout << "Your elem:";
		cin >> elem;
		if (std::cin.fail()){
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Enter the integer number!" << "\n";
			system("pause");
			cout << "\n";
		}
		else break;
	}
	return elem;
}
std::string Get_Selem(){
	std::cout << "Your elem:";
	std::string elem;
	cin >> elem;

	return elem;
}

int main()
{
	unsigned alternative;
	unsigned Menu;
	int index;
	list<double> DA;
	list<double> DB;
	list<double> DC;
	list<int> IA;
	list<int> IB;
	list<int> IC;
	list<std::string> SA;
	list<std::string> SB;
	list<std::string> SC;
	double Delem;
	int Ielem;
	std::string Selem;
	system("pause");
	for (;;)
	{
		system("cls");
		cout << "Select data type" << "\n";
		cout << "1.Double" << "\n";
		cout << "2.Int" << "\n";
		cout << "3.String" << "\n";
		cout << "Your select: ";
		cin >> alternative;
		if (alternative >= 1 && alternative <= 3)
		{
			break;
		}
	}
	for (;;)
	{
		system("cls");
		std::cout << "1.Get a character by index" << "\n"; // ������ �� �������
		std::cout << "2.Writing a character by index" << "\n"; // ������ �� �������
		std::cout << "3.Combining storke" << "\n"; // �������� �������
		std::cout << "4.Repeat the stroke" << "\n"; // ��������� ������� �� �����
		std::cout << "5.Add element to the end of the list" << "\n"; // ���������� � �����
		std::cout << "6.Get a sublist" << "\n"; // ������� � ������ � ������ ������������
		std::cout << "Esc.Exit" << "\n";  // �����
		switch (alternative)
		{
		case 1:
			std::cout << "First list:" << DA << "\n";
			std::cout << "Second list:" << DB << "\n";
			std::cout << "Result list:" << DC << "\n";
			break;
		case 2:
			std::cout << "First list:" << IA << "\n";
			std::cout << "Second list:" << IB << "\n";
			std::cout << "Result list:" << IC << "\n";
			break;
		case 3:
			std::cout << "First list:" << SA << "\n";
			std::cout << "Second list:" << SB << "\n";
			std::cout << "Result list:" << SC << "\n";
			break;
		}

		Menu = _getch();
		if (Menu == 27) break;
		switch (Menu)
		{
		case 49: // ������ �� �������
			for (;;)
			{
				system("cls");
				std::cout << "Select stroke" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1:" << DA << "\n";
					std::cout << "2:" << DB << "\n";
					break;
				case 2:
					std::cout << "1:" << IA << "\n";
					std::cout << "2:" << IB << "\n";
					break;
				case 3:
					std::cout << "1:" << SA << "\n";
					std::cout << "2:" << SB << "\n";
					break;
				}
				std::cout << "Esc.Back to main menu" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49: 
				{
					system("cls");
					std::cout << "Select index" << "\n";
					switch (alternative)
					{
					case 1:
						std::cout << "1:" << DA << "\n";
						break;
					case 2:
						std::cout << "1:" << IA << "\n";
						break;
					case 3:
						std::cout << "1:" << SA << "\n";
						break;
					}
					std::cout << "Your index:";
					std::cin >> index;
					std::cout << "\n";
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try
					{
						switch (alternative)
						{
						case 1:
							std::cout << "1:" << DA << "\n";
							std::cout << "2:" << DB << "\n";
							std::cout << "This is your character:" << DA[index - 1] << "\n";
							break;
						case 2:
							std::cout << "1:" << IA << "\n";
							std::cout << "2:" << IB << "\n";
							std::cout << "This is your character:" << IA[index - 1] << "\n";
							break;
						case 3:
							std::cout << "1:" << SA << "\n";
							std::cout << "2:" << SB << "\n";
							std::cout << "This is your character:" << SA[index - 1] << "\n";
							break;

						}
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					system("pause");
					break;
				}
				case 50: 
				{
					system("cls");
					std::cout << "Select index" << "\n";
					switch (alternative)
					{
					case 1:
						std::cout << "2:" << DB << "\n";
						break;
					case 2:
						std::cout << "2:" << IB << "\n";
						break;
					case 3:
						std::cout << "3:" << SB << "\n";
						break;
					}
					std::cout << "Your index:";
					std::cin >> index;
					std::cout << "\n";
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try
					{
						switch (alternative)
						{
						case 1:
							std::cout << "1:" << DA << "\n";
							std::cout << "2:" << DB << "\n";
							std::cout << "This is your character:" << DB[index - 1] << "\n";
							break;
						case 2:
							std::cout << "1:" << IA << "\n";
							std::cout << "2:" << IB << "\n";
							std::cout << "This is your character:" << IB[index - 1] << "\n";
							break;
						case 3:
							std::cout << "1:" << SA << "\n";
							std::cout << "2:" << SB << "\n";
							std::cout << "This is your character:" << SB[index - 1] << "\n";
							break;
						}
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					system("pause");
				}
				}
			}
			break;
		case 50: // ������ �� �������
			for (;;)
			{
				system("cls");
				std::cout << "Select stroke" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1:" << DA << "\n";
					std::cout << "2:" << DB << "\n";
					break;
				case 2:
					std::cout << "1:" << IA << "\n";
					std::cout << "2:" << IB << "\n";
					break;
				case 3:
					std::cout << "1:" << SA << "\n";
					std::cout << "2:" << SB << "\n";
					break;
				}
				std::cout << "Esc.Back to main menu" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49: 
				{
					system("cls");
					std::cout << "Select index" << "\n";
					switch (alternative)
					{
					case 1:
						std::cout << "1:" << DA << "\n";
						break;
					case 2:
						std::cout << "1:" << IA << "\n";
						break;
					case 3:
						std::cout << "1:" << SA << "\n";
						break;
					}
					std::cout << "Your index:";
					std::cin >> index;
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try
					{
						switch (alternative)
						{
						case 1:
							Delem = Get_Delem();
							DA[index - 1] = Delem;
							break;
						case 2:
							Ielem = Get_Ielem();
							IA[index - 1] = Ielem;
							break;
						case 3:
							Selem = Get_Selem();
							SA[index - 1] = Selem;
							break;
						}
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					std::cout << "New list: ";
					switch (alternative)
					{
					case 1:
						cout << DA << "\n";
						break;
					case 2:
						cout << IA << "\n";
						break;
					case 3:
						cout << SA << "\n";
						break;
					}
					system("pause");
					break;
				}
				case 50: 
				{
					system("cls");
					std::cout << "Select index" << "\n";
					switch (alternative)
					{
					case 1:
						std::cout << "2:" << DB << "\n";
						break;
					case 2:
						std::cout << "2:" << IB << "\n";
						break;
					case 3:
						std::cout << "2:" << SB << "\n";
						break;
					}
					std::cout << "Your index:";
					std::cin >> index;
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try {
						switch (alternative)
						{
						case 1:
							Delem = Get_Delem();
							DB[index - 1] = Delem;
							break;
						case 2:
							Ielem = Get_Ielem();
							IB[index - 1] = Ielem;
							break;
						case 3:
							Selem = Get_Selem();
							SB[index - 1] = Selem;
							break;
						}
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					std::cout << "New list: ";
					switch (alternative)
					{
					case 1:
						cout << DB << "\n";
						break;
					case 2:
						cout << IB << "\n";
						break;
					case 3:
						cout << SB << "\n";
						break;
					}
					system("pause");
					break;
				}
				}
			}
			break;
		case 51: //�������� �������
			for (;;)
			{
				system("cls");
				std::cout << "Select option" << "\n";
				std::cout << "1. 1+2" << "\n"; 
				std::cout << "2. 2+1" << "\n"; 
				std::cout << "Esc.Exit" << "\n";  
				switch (alternative)
				{
				case 1:
					std::cout << "1." << DA << "\n";
					std::cout << "2." << DB << "\n";
					break;
				case 2:
					std::cout << "1." << IA << "\n";
					std::cout << "2." << IB << "\n";
					break;
				case 3:
					std::cout << "1." << SA << "\n";
					std::cout << "2." << SB << "\n";
					break;
				}
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:
					switch (alternative)
					{
					case 1:
						DC = DA + DB;
						break;
					case 2:
						IC = IA + IB;
						break;
					case 3:
						SC = SA + SB;
						break;
					}
					break;
				case 50:
					switch (alternative)
					{
					case 1:
						DC = DB + DA;
						break;
					case 2:
						IC = IB + IA;
						break;
					case 3:
						SC = SB + SA;
						break;
					}
					break;
				}
			}
			break;
		case 52: //��������� �������
			for (;;)
			{
				system("cls");
				std::cout << "Select stroke" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1." << DA << "\n";
					std::cout << "2." << DB << "\n";
					break;
				case 2:
					std::cout << "1." << IA << "\n";
					std::cout << "2." << IB << "\n";
					break;
				case 3:
					std::cout << "1." << SA << "\n";
					std::cout << "2." << SB << "\n";
					break;
				}
				std::cout << "Esc.Back to main menu" << "\n";
				Menu = _getch();

				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:
					std::cout << "Your coefficient:";
					std::cin >> index;
					std::cout << "\n";
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try
					{
						switch (alternative)
						{
						case 1:
							DC = DA * index;
							break;
						case 2:
							IC = IA * index;
							break;
						case 3:
							SC = SA * index;
							break;
						}
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					break;
				case 50:
					std::cout << "Your coefficient:";
					std::cin >> index;
					std::cout << "\n";
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try
					{
						switch (alternative)
						{
						case 1:
							DC = DB * index;
							break;
						case 2:
							IC = IB * index;
							break;
						case 3:
							SC = SB * index;
							break;
						}
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					break;
				}
			}
			break;
		case 53: //���������� � ���e�
			for (;;)
			{
				system("cls");
				std::cout << "Select list" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1." << DA << "\n";
					std::cout << "2." << DB << "\n";
					break;
				case 2:
					std::cout << "1." << IA << "\n";
					std::cout << "2." << IB << "\n";
					break;
				case 3:
					std::cout << "1." << SA << "\n";
					std::cout << "2." << SB << "\n";
					break;
				}
				std::cout << "Esc.Exit" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:

					switch (alternative)
					{
					case 1:
						DA + (Get_Delem());
						break;
					case 2:
						IA + (Get_Ielem());
						break;
					case 3:
						SA + (Get_Selem());
						break;
					}
					break;
				case 50:
					switch (alternative)
					{
					case 1:
						DB + (Get_Delem());
						break;
					case 2:
						IB + (Get_Ielem());
						break;
					case 3:
						SB + (Get_Selem());
						break;
					}
					break;
				}
			}
			break;
		case 54: //�������
			for (;;)
			{
				system("cls");
				std::cout << "Select ctroke" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1." << DA << "\n";
					std::cout << "2." << DB << "\n";
					break;
				case 2:
					std::cout << "1." << IA << "\n";
					std::cout << "2." << IB << "\n";
					break;
				case 3:
					std::cout << "1." << SA << "\n";
					std::cout << "2." << SB << "\n";
					break;
				}
				std::cout << "Esc.Exit" << "\n";
				Menu = _getch();
				try
				{
					if (Menu == 27) break;
					switch (Menu)
					{
					case 49:
						switch (alternative)
						{
						case 1:
							DC = DA(select_start(), select_stop());
							break;
						case 2:
							IC = IA(select_start(), select_stop());
							break;
						case 3:
							SC = SA(select_start(), select_stop());
							break;
						}
						break;
					case 50:
						switch (alternative)
						{
						case 1:
							DC = DB(select_start(), select_stop());
							break;
						case 2:
							IC = IB(select_start(), select_stop());
							break;
						case 3:
							SC = SB(select_start(), select_stop());
							break;
						}
						break;
					}
				}
				catch (const char* err)
				{
					std::cerr << err << "\n";
					system("pause");
					break;
				}
			}
			break;
		}
	}
	return 0;

}
	