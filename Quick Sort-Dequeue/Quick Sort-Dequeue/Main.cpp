#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <vector>
#include "conio.h"
#include "CQuickSort.h"
#include "CNode.h"
#include "CDeque.h"



int main()
{
	CQuickSort quicksorter;
	CDeque deque;
	int sizeofsortarray = 10;
	int* sortarray = new int[sizeofsortarray];
	int dequeinput = 0;
	std::string sortelements;

	start:
	system("cls");
	std::cout << "Quicksort and Deque Program \n\n\n" << std::endl;
	std::cout << "Select Function: \n\n\n" << std::endl;

	std::cout << "1. Quicksort \n \n";
	std::cout << "2. Deque \n \n";
	std::cout << "3. Exit";

	int userinput = _getch() - 48;


	if (userinput >= 1 && userinput <= 3)
	{
		switch (userinput)
		{
		case 1:
			system("cls");
			std::cout << "Select an order: \n\n\n" << std::endl;
			std::cout << "0. Ascending \n\n";
			std::cout << "1. Descending \n\n";
			std::cout << "2. Back \n\n";

			userinput = 0;


			userinput = _getch() - 48;

			if (userinput >= 0 && userinput <= 2)
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
						std::cout << "Input elements number " << i + 1 << ":" << std::endl;
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
						std::cout << "Input elements number " << i + 1 << ":" << std::endl;
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
					std::cout << std::endl << std::endl;

				case 2:
					system("cls");
					goto start;
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
			userinput = 0;

			dequestart:
			system("cls");
			std::cout << "Deque \n" << std::endl;
			std::cout << "Enter a number \n\n" << std::endl;
			std::cout << "1. Enqueue Front" << std::endl;
			std::cout << "2. Enqueue Back" << std::endl;
			std::cout << "3. Dequeue Front" << std::endl;
			std::cout << "4. Dequeue Back" << std::endl;
			std::cout << "5. Peek Front" << std::endl;
			std::cout << "6. Peek Back" << std::endl;
			std::cout << "7. Is Empty" << std::endl;
			std::cout << "8. Display" << std::endl;
			std::cout << "9. Back" << std::endl;

			

			userinput = _getch() - 48;

			switch (userinput)
			{
			case 1:
				system("cls");
				std::cout << "Enter data:";
				std::cin >> dequeinput;
				deque.EnqueueFront(dequeinput);
				deque.Display();
				std::cout << std::endl << std::endl;
				system("pause");
				goto dequestart;

			case 2:
				system("cls");
				std::cout << "Enter data:";
				std::cin >> dequeinput;
				deque.EnqueueBack(dequeinput);
				deque.Display();
				std::cout << std::endl << std::endl;
				system("pause");
				goto dequestart;

			case 3:
				system("cls");
				deque.DequeueFront();
				deque.Display();
				std::cout << std::endl << std::endl;
				system("pause");
				goto dequestart;

			case 4:
				system("cls");
				deque.DequeueBack();
				deque.Display();
				std::cout << std::endl << std::endl;
				system("pause");
				goto dequestart;

			case 5:
				system("cls");
				std::cout << "[" << deque.PeekFront() << "]";
				std::cout << std::endl << std::endl;
				system("pause");
				goto dequestart;

			case 6:
				system("cls");
				std::cout << "[" << deque.PeekBack() << "]";
				std::cout << std::endl << std::endl;
				system("pause");
				goto dequestart;

			case 7:
				system("cls");
				if (deque.IsEmpty())
				{
					std::cout << "Deque is Empty" << std::endl;
				}
				std::cout << std::endl << std::endl;
				system("pause");
				goto dequestart;

			case 8:
				system("cls");
				deque.Display();
				std::cout << std::endl << std::endl;
				system("pause");
				goto dequestart;
				
			case 9:
				system("cls");
				goto start;

			default:
				break;
			}
			
			std::cout << std::endl;
			system("pause");
			goto dequestart;

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