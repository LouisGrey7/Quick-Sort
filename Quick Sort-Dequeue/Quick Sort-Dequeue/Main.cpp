#include <iostream>
#include <stdlib.h>
#include "conio.h"
#include "CQuickSort.h"



int main()
{
	CQuickSort quicksorter;
	int sizeofsortarray = 10;
	
	int* sortarray = new int[sizeofsortarray];

	



	start:
	system("cls");
	std::cout << "Quicksort and Dequeue Program \n\n\n" << std::endl;
	std::cout << "Select Function: \n\n\n" << std::endl;

	std::cout << "1. Quicksort \n \n";
	std::cout << "2. Dequeue \n \n";
	std::cout << "3. Exit";

	int userinput = _getch() - 48;

	if (userinput >= 0 && userinput <= 5)
	{
		switch (userinput)
		{
		case 1:
			system("cls");
			std::cout << "Select an order: \n\n\n" << std::endl;
			std::cout << "0. Ascending \n\n";
			std::cout << "1. Descending \n\n";

			userinput = 0;


			userinput = _getch() - 48;

			if (userinput >= 0 && userinput <= 1)
			{
				switch (userinput)
				{
				case 0:
					system("cls");
					std::cout << "Input number of elements too sort:" << std::endl;
					std::cin >> sizeofsortarray;
					system("cls");
					for (int i = 0; i < sizeofsortarray; i++)
					{
						std::cout << "Input elements number "<< i+1 << ":" << std::endl;
						std::cin >> sortarray[i]; std::cout << std::endl;
						system("cls");
					}

					system("cls");
					std::cout << "Original Order" << std::endl;
					for (int i = 0; i < sizeofsortarray; i++)
					{
						std::cout << sortarray[i] << " ";
					}
					std::cout << std::endl << std::endl;

					quicksorter.AscendingQuickSort(sortarray, 0, sizeofsortarray - 1);

					std::cout << "New Order" << std::endl;
					for (int i = 0; i < sizeofsortarray; i++)
					{
						std::cout << sortarray[i] << " ";
					}
					std::cout << std::endl << std::endl;
					system("pause");
					goto start;
				case 1:
					system("cls");
					std::cout << "Input number of elements too sort:" << std::endl;
					std::cin >> sizeofsortarray;
					system("cls");
					for (int i = 0; i < sizeofsortarray; i++)
					{
						std::cout << "Input elements number " << i+1 << ":" << std::endl;
						std::cin >> sortarray[i]; std::cout << std::endl;
						system("cls");
					}
					system("cls");
					std::cout << "Original Order" << std::endl;
					for (int i = 0; i < sizeofsortarray; i++)
					{
						std::cout << sortarray[i] << " ";
					}
					std::cout << std::endl << std::endl;

					quicksorter.DecendingQuickSort(sortarray, 0, sizeofsortarray - 1);

					std::cout << "New Order" << std::endl;
					for (int i = 0; i < sizeofsortarray; i++)
					{
						std::cout << sortarray[i] << " ";
					}
				}
				system("pause");
				goto start;
			}
			else
			{
				system("cls");
				std::cout << "input error" << std::endl;
				userinput = 0;
				system("pause");
				goto start;
			}
		case 2:
			system("cls");
			std::cout << "Dequeue" << std::endl;
			system("pause");
			goto start;

		case 3:
			system("cls");
			system("exit");
			
		}
	}
	else
	{
		system("cls");
		std::cout << "input error" << std::endl;
		userinput = 0;
		system("pause");
		goto start;
	}
		

}